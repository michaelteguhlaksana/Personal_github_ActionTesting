#include <bits/stdc++.h>
#include <string>

int rep(std::string seq){
	int maxi = 0;
	int curr = 0;
	char curr_let = seq[0];

	for (unsigned int i=0; i <seq.length(); i++) {
		if (seq[i] != curr_let) {
			if (curr > maxi) {
				maxi = curr;
			}
			curr_let = seq[i];
			curr = 0;
		}
		curr += 1;
	}

	
	if (curr > maxi) {
		maxi = curr;
	}

	return maxi;
}

/*
int main(){
	std::string seq;
	std::cin >> seq;

	int maxi = 0;
	int curr = 0;
	char curr_let = seq[0];

	for (unsigned int i=0; i <seq.length(); i++) {
		if (seq[i] != curr_let) {
			if (curr > maxi) {
				maxi = curr;
			}
			curr_let = seq[i];
			curr = 0;
		}
		curr += 1;
	}

	
	if (curr > maxi) {
		maxi = curr;
	}

	std::cout << maxi;

	return 0;
}
*/
