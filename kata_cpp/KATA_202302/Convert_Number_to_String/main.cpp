#include <iostream>

#include <string>

std::string number_to_string(int num) {
    return std::to_string(num);
}

int main() {
    std::cout << number_to_string(1+2) << std::endl;
    std::cout << number_to_string(67) << std::endl;
    std::cout << number_to_string(-5) << std::endl;
    return 0;
}
