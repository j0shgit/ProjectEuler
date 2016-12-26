#include <iostream>
#include <math.h>

int divisors(int n) {
	int limit = (int)sqrt(n);
	int divs = 0;

	for (int i = 1; i < limit; i++) {
		if (n % i == 0) divs += 2;
	}

	if (n % limit == 0) divs+=1;

	return divs;
}

int main() {

	int result = 0;
	int desired = 500;
	bool notFound = true;

	for (int i = 1; notFound; i++) {
		result+=i;
		int factors = divisors(result);

		if (factors > desired) notFound = false;
	}

	std::cout << result << std::endl;

	return 0;
}