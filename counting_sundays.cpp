#include <iostream>
#include <math.h>
#include <time.h>
#include <unistd.h>


void run() {
	int sundays = 0, daysInMonth, daysPassed = 0;

	for (int year = 1901; year <= 2000; year++) {
		for (int month = 1; month <=12; month++) {
			if (month == 4 || month == 6 || month == 9 || month == 11) {
				daysInMonth = 30;
			} else if (month == 2) { // february
				if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
					daysInMonth = 29;
				} else {
					daysInMonth = 28;
				}
			} else {
				daysInMonth = 31;
			}
			if (daysPassed % 7 == 0) {
				sundays++;
			}
			daysPassed += daysInMonth;
		}
	}

	std::cout << sundays << std::endl;
}

int main(int argc, char *argv[]) {
	clock_t start = clock();

	run();

	clock_t stop = clock();
	double elapsed = ((int)(stop - start) * 1000.0 / CLOCKS_PER_SEC) / 1000;
	std::cout << "Task completed in " << elapsed << "s." << std::endl;
	return 0;
}