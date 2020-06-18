from increasing_arr import increasing_arr
from missing_num import missing_num
from repetitions import rep
from weird_algo import weird_algo

class TestWeirdAlgo(object):
	""" For testing weird algo"""
	def test_small(*argv):
		exp = [7, 22, 11, 34, 17, 52, 26, 13, 40, 20, 10, 5, 16, 8, 4, 2, 1]
		assert weird_algo(7) == exp

	def test_medium(*argv):
		exp = [15, 46, 23, 70, 35, 106, 53, 160, 80, 40, 20, 10, 5, 16, 8, 4, 2, 1]
		assert weird_algo(15) == exp

	def test_large(*argv):
		exp = [255, 766, 383, 1150, 575, 1726, 863, 2590, 1295, 3886, 1943, 5830, 2915, 8746, 4373, 13120, 6560, 3280, 1640, 820, 410, 205, 616, 308, \
		154, 77, 232, 116, 58, 29, 88, 44, 22, 11, 34, 17, 52, 26, 13, 40, 20, 10, 5, 16, 8, 4, 2, 1
		]
		assert weird_algo(255) == exp

class TestMissingNum(object):
	"""For testing missing_num"""
	def test_single(*argv):
		assert missing_num(2, [2]) == 1

	def test_small(*argv):
		assert missing_num(5, [5, 2, 1, 3]) == 4

	def test_medium(*argv):
		assert missing_num(10, [2, 8, 10, 6, 5, 1, 3, 7, 4]) == 9

class TestRep(object):
	def test_allA(*argv):
		assert rep("AAAAAAAAAA") == 10

	def test_mixed1(*argv):
		assert rep("ACCGGGTTTT") == 4

	def test_mixed2(*argv):
		assert rep("CTCAGGTCCG") == 2

class TestIncArr(object):
	def test_1(*argv):
		assert increasing_arr(10,[1,1,1,1,1,1,1,1,1,1]) == 0

	def test_sudden_drop(*argv):
		assert increasing_arr(10,[1000000000,1,1,1,1,1,1,1,1,1]) == 8999999991

	def test_single(*argv):
		assert increasing_arr(1,[329873232]) == 0

	def test_random(*argv):
		assert increasing_arr(10,[6, 10, 4, 10, 2, 8, 9, 2, 7, 7]) == 31
