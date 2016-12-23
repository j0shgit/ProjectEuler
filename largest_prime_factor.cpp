#include <iostream>

int main() {
	long long bigass = 600851475143;

	int factor = 2;
	int lastFactor = 1;

	while (bigass > 1) {
		if (bigass % factor == 0) {
			lastFactor = factor;
			bigass /= factor;
			while (bigass % factor == 0) {
				bigass /= factor;
			}
		}
		factor++;
	}

	std::cout << lastFactor << std::endl;
	return 0;
}