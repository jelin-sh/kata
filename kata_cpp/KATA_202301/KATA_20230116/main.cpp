/**
 * KATA: https://www.codewars.com/kata/5266876b8f4bf2da9b000362
 */
#include <iostream>
#include <vector>

std::string likes(const std::vector<std::string> &names)
{
    std::string res;
    switch (names.size()) {
        case 0: res = "no one likes this"; break;
        case 1: res = names[0] + " likes this"; break;
        case 2: res = names[0] + " and " + names[1] + " like this"; break;
        case 3: res = names[0] + ", " + names[1] + " and " + names[2] + " like this"; break;
        default: res = names[0] + ", " + names[1] + " and " + std::to_string(names.size() - 2) + " others like this"; break;
    }
    return res; // Do your magic!
}

int main() {
    std::cout << likes({"Peter"}) << std::endl;
    return 0;
}
