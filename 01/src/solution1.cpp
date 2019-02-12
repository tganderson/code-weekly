#include <stdio.h>
#include <stdint.h>
#include <iostream>
#include <cmath>
using namespace std;

uint32_t exp(uint32_t n, uint32_t k) {
	uint32_t n_mod = n;
	double x = log2(k);
	if (k == 0) {
		return 1;
	}
	else if (k == 1) {
		return n;
	}
	else if (k == 2) {
		return pow(n, 2);
	}
	else {
		for (int i = 0; i < floor(x); i++) {
			n_mod = pow(n_mod, 2);
		}
		return n_mod * exp(n, k - pow(2, floor(x)));
	}
	throw;
}

int main(int argc, char* argv[]) {
	uint32_t n = *argv[1]; // read in argument for n */
	cin >> n;
	cout << exp(n, n); // compute n^n and write to stdout
}