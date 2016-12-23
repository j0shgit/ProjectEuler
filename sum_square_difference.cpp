#include <iostream>
#include <math.h>

int main() {

	long sum_sq = 0, sum = 0;
	for (int i = 1; i<=100; i++) {
		sum += i;
		sum_sq += pow(i, 2);
	}
	sum = pow(sum, 2);

	std::cout << (sum-sum_sq) << std::endl;

}