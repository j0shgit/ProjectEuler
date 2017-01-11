#include <iostream>
#include <math.h>
#include <time.h>
#include <unistd.h>


void run() {
	int arr[305] = {0};
	arr[0] = 1;

	int sum = 0;
	// multiply the array with 2, a thouand times, taking modulo and carry over
	for (int i = 1; i < 1001; i++) {
		arr[0] = 2*arr[0];
		for (int k = 1; k < 305; k++) {
			arr[k] = 2*arr[k] + arr[k-1]/10;

		}

		for (int j = 0; j < 305; j++) {
			arr[j] = arr[j] % 10;
		}
	}

	for (int i = 0; i < 305; i++) {
		sum += arr[i];

	}
	std::cout << sum << std::endl;

}

int main(int argc, char *argv[]) {
	clock_t start = clock();

	run();

	clock_t stop = clock();
	double elapsed = ((int)(stop - start) * 1000.0 / CLOCKS_PER_SEC) / 1000;
	std::cout << "Task completed in " << elapsed << "s." << std::endl;
	return 0;
}