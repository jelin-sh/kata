/**
 * kata: https://www.codewars.com/kata/546e2562b03326a88e000020
 */

#include <iostream>

int square_digits(int num) {
    std::string num_str = std::to_string(num);
    std::string result;
    for (char ch:num_str) {
        result += std::to_string((ch - '0') * (ch - '0'));
    }
    return std::strtol(result.c_str(), nullptr, 10);
}

int main() {
    std::cout << square_digits(3212) << std::endl;
    std::cout << square_digits(2112) << std::endl;
    std::cout << square_digits(0) << std::endl;
    return 0;
}
