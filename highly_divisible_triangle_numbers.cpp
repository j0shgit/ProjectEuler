#include <iostream>


int getTriangleNumber(int n) {
	int ret = 0;

	for (int x = 0; x <= n; x++) {
		ret += x;
	}

	return ret;	
}

int main() {


	for (int triangles = 12000; triangles < 13000; triangles++) {
		long triangle = (long)getTriangleNumber(triangles);

		int divisors = 0;
		for (long x = 1; x < triangle; x++) {
			if (triangle % x == 0) {
				divisors++;
			}
		}

		if (divisors > 500) {
			std::cout << triangle << std::endl;
		}
	}

	return 0;
}