#include <iostream>
#include <math.h>
#include <time.h>



long getPaths(int gridsize) {
	long paths = 1;
	for (int i = 0; i < gridsize; i++) {
		paths *= (2 * gridsize) - i;
		paths /= i + 1;
	}

	return paths;
}

void run() {
	std::cout << getPaths(20) << std::endl;
}

int main(int argc, char *argv[]) {
	clock_t start = clock();

	run();

	clock_t stop = clock();
	double elapsed = ((stop - start) * 1000.0 / CLOCKS_PER_SEC);
	std::cout << "Task completed in " << elapsed << "ms." << std::endl;
	return 0;
}