/**
 * KATA: https://www.codewars.com/kata/530e15517bc88ac656000716
 */

#include <iostream>
#include <string>
using namespace std;

string rot13(const string &msg) {
    string result;
    for (const char &c: msg) {
        if (c >= 'a' && c <= 'z') {
            result += (char) ((c - 'a' + 13) % 26 + 'a');
        } else if (c >= 'A' && c <= 'Z') {
            result += (char) ((c - 'A' + 13) % 26 + 'A');
        } else {
            result += c;
        }
    }
    return result;
}
int main() {
    std::cout << rot13("test") << std::endl;
    std::cout << rot13("Test") << std::endl;
    std::cout << rot13("AbCd") << std::endl;
    return 0;
}
