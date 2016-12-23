#include <iostream>

int main() {

	bool found = false;
	long number = 20;
	while (found == false) {
		bool passes = true;
		for (int x = 10; x < 20; x++) {
			if (number % x != 0) {
				passes = false;
			}
		}
		found = passes;

		number+=20;
	}
	std::cout << number << std::endl;
}