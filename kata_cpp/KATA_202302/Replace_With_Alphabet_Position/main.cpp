/**
 * KATA: https://www.codewars.com/kata/546f922b54af40e1e90001da
 */
#include <iostream>
#include <sstream>
#include <string>

std::string alphabet_position(const std::string &text) {
    std::stringstream ss;
    for(char c : text) {
        if (c >= 'A' && c  <= 'Z') {
            ss << (int)(c  - 'A' + 1) << " ";
        } else if (c  >= 'a' && c <= 'z') {
            ss << (int)(c  - 'a' + 1) << " ";
        }
    }
    std::string res = ss.str();
    if(!res.empty()){
        res.erase(res.end() - 1);
    }
    return res;
}

int main() {
    std::string a = alphabet_position("Hello");
    std::cout << a << std::endl;
    return 0;
}
