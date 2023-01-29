/**
 * kata: https://www.codewars.com/kata/54da5a58ea159efa38000836
 */

#include <algorithm>
#include <iostream>
#include <vector>

int findOdd(const std::vector<int>& numbers){
    std::vector<int> num(numbers);
    std::sort(num.begin(), num.end());
    for (int i = 0; i < num.size(); ++i) {
        if (num[i] != num[i+1] && (i+1) % 2 != 0) {
            return num[i];
        }
    }
    return 0;
}

/*

#include <functional>
#include <numeric>
#include <vector>

int findOdd(const std::vector<int>& numbers) {
   return std::accumulate(numbers.cbegin(), numbers.cend(), 0, std::bit_xor<>());
}


 * */

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
