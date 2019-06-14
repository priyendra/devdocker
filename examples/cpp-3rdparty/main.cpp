#include <iostream>
#include "gflags/gflags.h"

DEFINE_int32(x, 1, "");

// How to compile:
// $ devdocker exec g++ -o main main.cpp /usr/local/lib/libgflags.a -pthread
// $ devdocker exec ./main --x 2  # should output 2

int main(int argc, char** argv) {
  gflags::SetUsageMessage("hello");
  gflags::ParseCommandLineFlags(&argc, &argv, false);
  std::cout << FLAGS_x << std::endl;
}
