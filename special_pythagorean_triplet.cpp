#include <iostream>
#include <math.h>

int main() {

	for (int a=1; a <= 1000; a++) {
		for (int b = 1; b <= 1000; b++) {

			int cSquared = pow(a, 2) + pow(b, 2);

			double c = sqrt(cSquared);

			if ((a+b+c) == 1000) {
				if ((a < b) && (b < c)) {
					std::cout << (a*b*c) << ": [" << a << ", " << b << ", " << c << "]" << std::endl;
				}
			}
		}
	}
	return 0;
}