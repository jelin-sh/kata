/**
 * KATA: https://www.codewars.com/kata/56606694ec01347ce800001b
 */

#include <iostream>

bool isTriangle(long long a, long long b, long long c)
{
    return (a + b > c && a + c > b && b + c > a);
}

int main() {
    std::cout << isTriangle(1,2,3) << std::endl;
    return 0;
}