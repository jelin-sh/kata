/**
 * kata: Descending Order
 */
#include <algorithm>
#include <cinttypes>
#include <iostream>
#include <vector>
uint64_t descendingOrder(uint64_t a)
{
    std::vector<uint64_t> vec;
    while(a>0){
        vec.push_back(a%10);
        a/=10;
    }
    std::sort(vec.begin(),vec.end(),[](uint64_t a,uint64_t b){
        return a>b;
    });
    for (auto num:vec) {
        a = a*10+num;
    }
    return a;
}

int main() {
    std::cout <<  descendingOrder(1021) << std::endl;
    return 0;
}
