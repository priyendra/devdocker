#include "gtest/gtest.h"
#include "function.hpp"

TEST(Fn, Basic) {
  EXPECT_EQ(100, fn());
}

int main(int argc, char** argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
