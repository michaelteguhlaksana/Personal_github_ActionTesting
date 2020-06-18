def weird_algo(n) :
	res = []
	while n != 1:
		res.append(n)
		if n % 2 == 0 :
			n = n/2
		else:
			n = n * 3 + 1
	res.append(n)
	return res

#def test_func():
#	assert func(7) == [7, 22, 11, 34, 17, 52, 26, 13, 40, 20, 10, 5, 16, 8, 4, 2, 1]

if __name__ == '__main__' :
	n = input ()
	print(func(n))
