# See here for image contents: https://github.com/microsoft/vscode-dev-containers/tree/v0.191.1/containers/debian/.devcontainer/base.Dockerfile

# [Choice] Debian version: bullseye, buster, stretch
ARG VARIANT="bullseye"
FROM mcr.microsoft.com/vscode/devcontainers/base:0-${VARIANT}

ENV FAUST=2.33.1
ENV LLVM=12

# ** [Optional] Uncomment this section to install additional packages. **
RUN apt-get update && export DEBIAN_FRONTEND=noninteractive \
    && apt-get -y install --no-install-recommends \
        build-essential libncurses5-dev libncurses5 libmicrohttpd-dev git cmake pkg-config build-essential libncurses5-dev

RUN export DEBIAN_FRONTEND=noninteractive \
    && apt-get -y install --no-install-recommends \
        software-properties-common lsb-release libsndfile1-dev libjack-dev

RUN apt-get autoremove

WORKDIR /
RUN mkdir /faust

WORKDIR /faust
RUN wget --quiet https://github.com/grame-cncm/faust/releases/download/2.33.1/faust-${FAUST}.tar.gz

RUN tar xf faust-${FAUST}.tar.gz

RUN mkdir /llvm
WORKDIR /llvm

RUN wget https://apt.llvm.org/llvm.sh
RUN chmod +x llvm.sh
RUN ./llvm.sh ${LLVM}
RUN ln -s /usr/bin/llvm-config-${LLVM} /usr/bin/llvm-config

WORKDIR /faust/faust-${FAUST}
RUN make all
RUN make install

