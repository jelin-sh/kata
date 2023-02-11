#include <iostream>

std::string even_or_odd(int number) {
    return (number%2)? "Odd" : "Even";
}

int main() {
    std::cout << even_or_odd(1) << std::endl;
    std::cout << even_or_odd(2) << std::endl;
    return 0;
}
