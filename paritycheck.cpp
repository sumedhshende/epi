#include <iostream>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <inttypes.h>
#include <ctime>

bool parityCheck(uint64_t num) {
    int counter = 0;
    while( num ) {
        std::cout << (num & 1);
        ++counter;
        num >>= 1;
    }
    std::cout << std::endl;

    return ((num%2 == 0) ? false : true);
}

void test_parity(int testCount=10) {
    srand(time(NULL));
    for(int i=0; i<testCount; i++) {
        uint64_t number = rand() % 10 + 1;
        std::cout << number << " :  " << parityCheck(number) << std::endl;
    }    
}
int main() {
    test_parity();
    return 0;
}
