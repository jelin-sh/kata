/**
 * kata:https://www.codewars.com/kata/54d512e62a5e54c96200019e
 */

#include <iostream>

static std::string factors(int lst){
    std::string result = "";
    int buf = 0;
    int count = 0;
    int i = 2;
    while (lst != 1){
        if (lst % i == 0){
            buf = i;
            lst /= i;
            if (lst != 1){
                count++;
            }else{
                result += "(" + std::to_string(buf) + ")";
            }
        }else{
            if(buf != 0){
                if (count < 2){
                    result += "(" + std::to_string(buf) + ")";
                }else{
                    result += "(" + std::to_string(buf) + "**" + std::to_string(count) + ")";
                }
                count = 0;
                buf = 0;
            }
            i++;
        }
    }
    return result;
}

int main() {
    std::cout << factors(7775460) << std::endl;
    std::cout << factors(97532468) << std::endl;
    std::cout << factors(7919) << std::endl;
    factors(7919);
    return 0;
}
