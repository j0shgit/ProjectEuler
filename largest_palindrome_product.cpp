#include <iostream>
#include <algorithm>

int main() {

	for (int x = 900; x <= 999; x++) {
		for (int y = 900; y <= 999; y++) {
			std::string num = std::to_string(x*y);

			std::string reversed = num;
			std::reverse(reversed.begin(), reversed.end());

			if (num == reversed) {
				std::cout << num << std::endl;
			}
		}
	}

	return 0;
}