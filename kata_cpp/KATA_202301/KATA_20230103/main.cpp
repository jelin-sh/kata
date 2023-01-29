/**
 * KATA: https://www.codewars.com/kata/554b4ac871d6813a03000035
 */

#include <iostream>
#include <string>
#include <limits>

std::string highAndLow(const std::string& numbers){
    std::string result;
    const char* str = numbers.data();
    bool negative = false;
    int val = 0,max = std::numeric_limits<int>::min(),min = std::numeric_limits<int>::max();
    while(*str != 0){
        if(*str == ' '){
            //结算
            if(negative){
                val = -val;
            }
            if(val < min){
                min = val;
            }
            if(val > max){
                max = val;
            }
            str++;
            negative = false;
            val = 0;
            continue;
        }
        if(*str == '-'){
            negative = true;
        }
        else if(*str >= '0' && *str <= '9'){
            val = val * 10 + (*str - '0');
        }
        str++;
    }

    if(negative){
        val = -val;
    }
    if(val < min){
        min = val;
    }
    if(val > max){
        max = val;
    }

    result = std::to_string(max) + " " + std::to_string(min);
    return result;
}

int main() {
    std::cout << highAndLow("8 3 -5 42 -1 0 0 -9 4 7 4 -4") << std::endl;
    std::cout << highAndLow("1 2 3") << std::endl;
    return 0;
}
