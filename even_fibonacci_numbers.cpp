#include <iostream>
#include <iostream>

int main() {


	long limit = 4000000;
	long sum;
	long a = 1;
	long b = 1;
	long h;

	while (b < limit) {
		if (b % 2 == 0) {
			sum+=b;
		}
		h = a+b;
		a=b;
		b=h;
	}

	std::cout << sum << std::endl;
	return 0;
}