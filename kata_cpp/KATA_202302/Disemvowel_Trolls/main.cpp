/**
 * kata: https://www.codewars.com/kata/52fba66badcd10859f00097e
 */
#include <iostream>
#include <string>

std::string disemvowel(const std::string &str) {
    std::string result;
    for (auto c: str) {
        switch (c) {
            case 'a':case 'A':
            case 'e':case 'E':
            case 'i':case 'I':
            case 'o':case 'O':
            case 'u':case 'U':
                break;
            default:
                result += c;
                break;
        }
    }
    return result;
}

int main() {
    std::cout <<disemvowel("Hello, World!")<< std::endl;
    return 0;
}
