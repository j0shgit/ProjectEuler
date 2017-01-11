#include <iostream>
#include <math.h>
#include <time.h>
#include <unistd.h>
#include <string>

std::string total;
std::string current;

void expand(int value) {

    
    const char * const ones[20] = {"zero", "one", "two", "three","four","five","six","seven",
    "eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen",
    "eighteen","nineteen"};
    const char * const tens[10] = {"", "ten", "twenty", "thirty","forty","fifty","sixty","seventy",
    "eighty","ninety"};

    if(value<0)
    {
        current += "minus ";
        expand(-value);
    }
    else if(value>=1000)
    {
        expand(value/1000);
        current += "thousand";
        if(value % 1000)
        {
            if(value % 1000 < 100)
            {
                current += "and";
            }
            //std::cout << " " ;
            expand(value % 1000);
        }
    }
    else if(value >= 100)
    {
        expand(value / 100);
        current += "hundred";
        if(value % 100)
        {
            current += "and";
            expand (value % 100);
        }
    }
    else if(value >= 20)
    {
        current += tens[value / 10];
        if(value % 10)
        {
            //std::cout << " ";
            expand(value % 10);
        }
    }
    else
    {
       current += ones[value];
    }

    return;
}




void run() {

    for (int x = 1; x <= 1000; x++) {
        expand(x);
        total += current;
        current = "";
        std::cout << x << std::endl;
    }

    std::cout << total.size() << std::endl;
}

int main(int argc, char *argv[]) {
    clock_t start = clock();

    run();

    clock_t stop = clock();
    double elapsed = ((int)(stop - start) * 1000.0 / CLOCKS_PER_SEC) / 1000;
    std::cout << "Task completed in " << elapsed << "s." << std::endl;
    return 0;
}