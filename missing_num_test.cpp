#include <gtest/gtest.h>
#include "missing_num.h"

int single [] = {2};
int small [] = {5, 2, 1, 3};
int med [] = {2, 8, 10, 6, 5, 1, 3, 7, 4};

TEST(missingtest, single) {
	EXPECT_EQ(func(2,single),1) <<"Expecting " << 1 << ". Got " << func(2,single);
}

TEST(missingtest, small) {
	EXPECT_EQ(func(5,small),4) <<"Expecting " << 4 << ". Got " << func(5,small);
}

TEST(missingtest, medium) {
	EXPECT_EQ(func(10,med),9) <<"Expecting " << 9 << ". Got " << func(10,med);
}

int main(int argc, char* argv[]) {
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}