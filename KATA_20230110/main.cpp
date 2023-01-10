/**
 * kata: https://www.codewars.com/kata/556deca17c58da83c00002db
 */

#include <iostream>
#include <vector>

std::vector<int> tribonacci(std::vector<int> signature, int n)
{
    std::vector<int> result(signature);
    if (n < 4) {
        result.resize(n);
    } else {
        for (int i = 3; i < n; ++i) {
            result.push_back(result[i - 1] + result[i - 2] + result[i - 3]);
        }
    }
    return result;
}

int main() {
    std::vector<int> signature = {1, 1, 1};
    int n = 10;
    std::vector<int> result = tribonacci(signature, n);
    for (auto i : result) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}
