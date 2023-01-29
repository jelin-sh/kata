/**
 * KATA: https://www.codewars.com/kata/544675c6f971f7399a000e79
 */

#include <iostream>

int string_to_number(const std::string& s) {
    return std::stoi(s);
}

int main() {
    std::cout << string_to_number("123456") << std::endl;
    return 0;
}
