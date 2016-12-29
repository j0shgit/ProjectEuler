#include <iostream>


long collatzSequence(long start) {
	long curr = start;
	long chain = 0;

	std::cout << start << " | ";
	while (curr != 1) {

		if (curr % 2 == 0) {
			curr = (curr/2);
		} else {
			curr = (curr*3)+1;
		}
		chain++;
	}

	std::cout << chain <<  std::endl;

	return chain;
}

int main() {

	std::cout << collatzSequence(113383) << std::endl;
	long largest = 0;
	long current = 0;

	for (long x = 1; x < 1000000; x++) {
		long gay = collatzSequence(x);

		if (gay > largest) { largest = gay; current = x; }
	}

	std::cout << "LARGEST: " << current << " | " << largest << std::endl;
}