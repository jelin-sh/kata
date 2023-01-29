/**
 * kata: https://www.codewars.com/kata/5277c8a221e209d3f6000b56
 */

#include <cstring>
#include <iostream>
#include <optional>

std::optional<int> foo(const char *str, int offset = 0, char symbol = 0) {
    char c = str[offset];
    if (c == '(' || c == '[' || c == '{') {
        auto res = foo(str, offset + 1, c);
        if (res.has_value()) {
            int cur = res.value();
            if (offset > 0) {
                return foo(str, cur + 1, symbol);
            } else {
                if (strlen(str) == cur + 1) {
                    return cur + 1;
                } else {
                    return foo(str + cur + 1, 0, 0);
                }
            }
        }
    }
    switch (symbol) {
        case '[':
            if (c == ']') return offset;
            break;
        case '{':
            if (c == '}') return offset;
            break;
        case '(':
            if (c == ')') return offset;
            break;
        default:
            break;
    }
    return std::nullopt;
}

bool valid_braces(std::string braces) {
    return foo(braces.c_str()) != std::nullopt;
}

int main() {
    std::cout << valid_braces("(){}[]") << std::endl;
    std::cout << valid_braces("([{}])") << std::endl;
    std::cout << valid_braces("(}") << std::endl;
    std::cout << valid_braces("[(])") << std::endl;
    std::cout << valid_braces("[({})](]") << std::endl;
    return 0;
}
