/**
 * KATA: https://www.codewars.com/kata/54bf1c2cd5b56cc47f0007a1
 */
#include <iostream>
#include <cmath>

class DigPow
{
public:
    static int digPow(int n, int p){
        int sum = 0;
        std::string str = std::to_string(n);
        for (int i = 0; i < str.length(); i++) {
            sum += static_cast<int>(std::pow(str[i] - '0', p + i));
        }
        return (sum % n != 0)? -1 : sum / n;
    }
};

int main() {
    std::cout << DigPow::digPow(89, 1) << std::endl;
    std::cout << DigPow::digPow(92, 1) << std::endl;
    std::cout << DigPow::digPow(46288, 3) << std::endl;
    std::cout << DigPow::digPow(114, 3) << std::endl;
    return 0;
}
