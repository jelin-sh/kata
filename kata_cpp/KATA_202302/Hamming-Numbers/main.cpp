/**
 * Hamming Numbers
 */

#include <cstdint>
#include <iostream>
#include <vector>
#include <algorithm>

uint64_t hamber(int n) {
    uint32_t i = 0, j = 0, k = 0;
    std::vector<uint64_t> res;
    res.resize(n);
    std::fill(res.begin(), res.end(), 1);
    for (int index = 1; index < n; ++index) {
        uint64_t a = res[i] * 2;
        uint64_t b = res[j] * 3;
        uint64_t c = res[k] * 5;
        res[index] = std::min({a,b,c});
        if(res[index] == a){i++;}
        if(res[index] == b){j++;}
        if(res[index] == c){k++;}
    }
    return res.back();
}

int main() {
    std::cout << hamber(5) << std::endl;
    std::cout << hamber(8) << std::endl;
    std::cout << hamber(11) << std::endl;
    return 0;
}
