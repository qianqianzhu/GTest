#include "whattotest.cu"
#include <gtest/gtest.h>

TEST(AddKernelWrapper, AddsArrays) {
  int length = 10;
  int c[length] = {0,1,2,3,4,5,6,7,8,9};
	int b[length] = {9,8,7,6,5,4,3,2,1,0};
  int c[length];
  addKernelWrapper((int*) &a, (int*) &b, (int*) &c);
  EXPECT_EQ(c[0], 9);
  EXPECT_EQ(c[1], 9);
  EXPECT_EQ(c[2], 9);
  EXPECT_EQ(c[3], 9);
  EXPECT_EQ(c[4], 9);
  EXPECT_EQ(c[5], 9);
  EXPECT_EQ(c[6], 9);
  EXPECT_EQ(c[7], 9);
  EXPECT_EQ(c[8], 9);
  EXPECT_EQ(c[9], 9);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
