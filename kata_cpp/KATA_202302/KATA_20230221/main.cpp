/**
 * Sum of Digits / Digital Root
 * Kata: https://www.codewars.com/kata/541c8630095125aba6000c00
 */
#include <iostream>

int digital_root(int n) {
    int sum = 0;
    while(n > 0){
        sum += n%10;
        n/=10;
    }
    if(sum >= 10){
        return digital_root(sum);
    }
    return sum;
}

int main() {
    std::cout << digital_root(493193) << std::endl;
    return 0;
}
