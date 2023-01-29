/**
 * KATA: https://www.codewars.com/kata/51b62bf6a9c58071c600001b
 */

#include <iostream>
#include <string>
std::string solution(int number){
    // convert the number to a roman numeral
    std::string roman = "";
    int thousands = number / 1000;
    int hundreds = (number % 1000) / 100;
    int tens = (number % 100) / 10;
    int ones = number % 10;
    for (int i = 0; i < thousands; i++) {
        roman += "M";
    }
    if (hundreds == 9) {
        roman += "CM";
    } else if (hundreds >= 5) {
        roman += "D";
        for (int i = 0; i < hundreds - 5; i++) {
            roman += "C";
        }
    } else if (hundreds == 4) {
        roman += "CD";
    } else {
        for (int i = 0; i < hundreds; i++) {
            roman += "C";
        }
    }
    if (tens == 9) {
        roman += "XC";
    } else if (tens >= 5) {
        roman += "L";
        for (int i = 0; i < tens - 5; i++) {
            roman += "X";
        }
    } else if (tens == 4) {
        roman += "XL";
    } else {
        for (int i = 0; i < tens; i++) {
            roman += "X";
        }
    }
    if (ones == 9) {
        roman += "IX";
    } else if (ones >= 5) {
        roman += "V";
        for (int i = 0; i < ones - 5; i++) {
            roman += "I";
        }
    } else if (ones == 4) {
        roman += "IV";
    } else {
        for (int i = 0; i < ones; i++) {
            roman += "I";
        }
    }
    return roman;
}
int main() {
    std::cout << solution(182) << std::endl;
    std::cout << solution(1990) << std::endl;
    std::cout << solution(1875) << std::endl;
    return 0;
}
