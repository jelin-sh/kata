/**
 * kata: https://www.codewars.com/kata/53ee5429ba190077850011d4
 */
#include <cstdint>
#include <iostream>

int32_t double_integer(int32_t n) {
    return n << 1;
}

int main() {
    std::cout << double_integer(1) << std::endl;
    std::cout << double_integer(10) << std::endl;
    std::cout << double_integer(20) << std::endl;
    return 0;
}
