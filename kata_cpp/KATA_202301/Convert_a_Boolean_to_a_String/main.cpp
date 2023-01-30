/**
 * KATA: https://www.codewars.com/kata/551b4501ac0447318f0009cd
 */

#include <iostream>

std::string boolean_to_string(bool b){
    return b? "true" : "false";
}
int main() {
    std::cout << boolean_to_string(true) << std::endl;
    std::cout << boolean_to_string(false) << std::endl;
    return 0;
}
