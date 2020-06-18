#include <bits/stdc++.h>

long weird_algo(long n) {
	if (n%2 == 0) {
		return n/2;
	}
	else {
		return n*3+1;
	}
}
