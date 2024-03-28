SHELL = /bin/bash

PREFIX_PATH := ${HOME}/.local
TEMP_PATH := /tmp/chatup
CWD_PATH = $(shell pwd)

.PHONY: all
all: clean deps gen build

deps: deps_structure deps_grpc

deps_structure:
	mkdir -p ${PREFIX_PATH}
	mkdir -p ${TEMP_PATH}

deps_grpc:
	if ! command -v protoc &> /dev/null; then \
		if [ ! -d "${TEMP_PATH}/grpc" ]; then \
			git clone \
				--recurse-submodules \
				-b v1.62.0 \
				--depth 1 \
				--shallow-submodules https://github.com/grpc/grpc \
				${TEMP_PATH}/grpc; \
		fi; \
		cd ${TEMP_PATH}/grpc/ && \
			mkdir -p ${TEMP_PATH}/grpc/cmake/build/ && \
			pushd ${TEMP_PATH}/grpc/cmake/build/ && \
			cmake -DgRPC_INSTALL=ON \
			-DgRPC_BUILD_TESTS=OFF \
			-DCMAKE_INSTALL_PREFIX=${PREFIX_PATH} \
			../.. && \
			make -j $(nproc) && \
			make install; \
	fi

gen:
	protoc \
		--proto_path=${CWD_PATH}/proto \
		--cpp_out=${CWD_PATH}/src \
		--grpc_out=${CWD_PATH}/src \
		--plugin=protoc-gen-grpc=$(shell which grpc_cpp_plugin) \
		chatup.proto

build:
	mkdir -p ${CWD_PATH}/target
	mkdir -p ${TEMP_PATH}/src
	cd ${CWD_PATH}/src && \
		cd ${CWD_PATH}/src && \
		cmake -B ${TEMP_PATH}/src -S . && \
		cmake --build ${TEMP_PATH}/src
	mv ${TEMP_PATH}/src/chatup ${CWD_PATH}/target/

install: build
	cp target/chatup ${PREFIX_PATH}/bin/

uninstall:
	if [ -f "${PREFIX_PATH}/bin/chatup" ]; then \
		rm -rf ${PREFIX_PATH}/bin/chatup; \
	fi

clean:
	rm -rf ${CWD_PATH}/target
	rm -rf ${TEMP_PATH}