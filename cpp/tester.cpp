#include <gtest/gtest.h>
#include "weird_algo.h"
#include "missing_num.h"
#include "repetitions.h"

TEST(missingtest, single) {
	int single [] = {2};
	EXPECT_EQ(missing_num(2,single),1) <<"Expecting " << 1 << ". Got " << missing_num(2,single);
}

TEST(missingtest, small) {
	int small [] = {5, 2, 1, 3};
	EXPECT_EQ(missing_num(5,small),4) <<"Expecting " << 4 << ". Got " << missing_num(5,small);
}

TEST(missingtest, medium) {
	int med [] = {2, 8, 10, 6, 5, 1, 3, 7, 4};
	EXPECT_EQ(missing_num(10,med),9) <<"Expecting " << 9 << ". Got " << missing_num(10,med);
}

TEST(weirdtest, small) {
	long exp [] = {7, 22, 11, 34, 17, 52, 26, 13, 40, 20, 10, 5, 16, 8, 4, 2, 1};
	long n = 7;
	int i = 0;
	while (i < sizeof(exp)/sizeof(exp[0])) {
		ASSERT_EQ(n, exp[i]) << "Wrong answer at output " << n << ". " << "Expecting " << exp[i] << ".";
		n = weird_algo(n);
		i ++;
	}
}

TEST(weirdtest, medium) {
	long exp [] = {15, 46, 23, 70, 35, 106, 53, 160, 80, 40, 20, 10, 5, 16, 8, 4, 2, 1};
	long n = 15;
	int i = 0;
	while (i < sizeof(exp)/sizeof(exp[0])) {
		ASSERT_EQ(n, exp[i]) << "Wrong answer at output " << n << ". " << "Expecting " << exp[i] << ".";
		n = weird_algo(n);
		i ++;
	}
}

TEST(weirdtest, large) {
	long exp [] = {255, 766, 383, 1150, 575, 1726, 863, 2590, 1295, 3886, 1943, 5830, 2915, 8746, 4373, 13120, 6560, 3280, 1640, 820, 410, 205, 616, 308, 
		154, 77, 232, 116, 58, 29, 88, 44, 22, 11, 34, 17, 52, 26, 13, 40, 20, 10, 5, 16, 8, 4, 2, 1
	};

	long n = 255;
	int i = 0;
	while (i < sizeof(exp)/sizeof(exp[0])) {
		ASSERT_EQ(n, exp[i]) << "Wrong answer at output " << n << ". " << "Expecting " << exp[i] << ".";
		n = weird_algo(n);
		i ++;
	}
}

TEST(reptest, allA) {
	std::string seq = "AAAAAAAAAA";
	ASSERT_EQ(rep(seq),10) <<"Expecting " << 10 << ". Got " << rep(seq); 
}

TEST(reptest, mixed1) {
	std::string seq = "ACCGGGTTTT";
	ASSERT_EQ(rep(seq),4) <<"Expecting " << 4 << ". Got " << rep(seq); 
}

TEST(reptest, mixed2) {
	std::string seq = "CTCAGGTCCG";
	ASSERT_EQ(rep(seq),2) <<"Expecting " << 2 << ". Got " << rep(seq); 
}

int main(int argc, char* argv[]) {
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
