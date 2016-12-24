#include <iostream>

bool isPrime(int number) {
	if(number < 2) return false;
    if(number == 2) return true;
    if(number % 2 == 0) return false;
    for(int i=3; (i*i)<=number; i+=2){
        if(number % i == 0 ) return false;
    }
    return true;
}

int main() {

	long primeSum;

	for (int x = 2000000; x > 0; x--) {
		if (isPrime(x)) {
			primeSum+=x;
		}
	}

	std::cout << primeSum << std::endl;
	return 0;
}