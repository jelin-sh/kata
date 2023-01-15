/**
 * KATA: https://www.codewars.com/kata/52f787eb172a8b4ae1000a34
 */

#include <iostream>

#include <cmath>
// note: https://mathworld.wolfram.com/Factorial.html
long zeros(long n) {
    long Z = 0;
    long k_max = (long)(std::log(n) / std::log(5));
    for (long k = 1; k <= k_max; k++) {
        Z += (long)(n / std::pow(5, k));
    }
    return Z;
}

int main() {
    std::cout << zeros(827) << std::endl;
    return 0;
}
