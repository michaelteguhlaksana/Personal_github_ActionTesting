#include <gtest/gtest.h>
#include "weird_algo.h"

TEST(weirdtest, input7) {
	long exp [] = {7, 22, 11, 34, 17, 52, 26, 13, 40, 20, 10, 5, 16, 8, 4, 2, 1};
	long n = 7;
	int i = 0;
	while (i < sizeof(exp)/sizeof(exp[0])) {
		ASSERT_EQ(n, exp[i]) << "Wrong answer at output " << n << ". " << "Expecting " << exp[i] << ".";
		n = func(n);
		i ++;
	}
}

int main(int argc, char* argv[]) {
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
