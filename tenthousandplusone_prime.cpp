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
	int primes = 0;
	int curr = 0;
	while (primes < 10001) {
		if (isPrime(curr)) {
			primes++;
			std::cout << curr << std::endl;
		}
		curr++;
	}
	return 0;
}