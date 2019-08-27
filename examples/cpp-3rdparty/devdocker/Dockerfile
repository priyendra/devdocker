FROM ubuntu:18.04

RUN apt-get update && apt-get install -y \
      build-essential \
      cmake \
      gdb \
      git \
      man-db \
      python \
      software-properties-common \
      sudo \
      vim

# Copy core files needed to build 3rd party libs.
COPY 3rdparty/3rdparty /3rdparty/

# Build the 3rdparty libraries
COPY 3rdparty/gflags /devdocker/3rdparty/gflags/
RUN /3rdparty/3rdparty mklib gflags --cleanup
