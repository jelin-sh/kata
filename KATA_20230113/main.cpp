/**
 * kata: https://www.codewars.com/kata/55aa075506463dac6600010d
 */
#include <iostream>
#include <vector>
#include <cmath>

class SumSquaredDivisors
{
public:
    static std::vector<std::pair<long long, long long>> listSquared(long long m, long long n){
        std::vector<std::pair<long long, long long>> res;
        for (long long i = m; i < n; ++i) {
            long long temp = 0, sum = 0;
            if(i == 1) {
                res.emplace_back(1, 1);
                continue;
            }
            for (int j = 1; j <= i; ++j) {
                if(j == temp){
                    double temp_sqrt = sqrt((double)sum);
                    if(temp_sqrt == (int)temp_sqrt){
                        res.emplace_back(i, sum);
                    }
                    break ;
                }
                if(i % j == 0){
                    long long b = i / j;
                    temp = b;
                    sum += b * b + j * j;
                }
            }
        }
        return res;
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    SumSquaredDivisors::listSquared(1,250);
    long long temp = 0, sum = 0, i = 42;
    for (int j = 1; j <= i; ++j) {
        if(j == temp){
            float temp_sqrt = invSqrt((float)sum);
            if(temp_sqrt == (int)temp_sqrt){
                std::cout << i << " " << sum << std::endl;
            }
            break ;
        }
        if(i % j == 0){
            long long b = i / j;
            temp = b;
            sum += b * b + j * j;
        }
    }
    return 0;
}
