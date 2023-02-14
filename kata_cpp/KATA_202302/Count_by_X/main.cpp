/**
 * kata: https://www.codewars.com/kata/5513795bd3fafb56c200049e
 */
#include <iostream>
#include <vector>
std::vector<int> countBy(int x,int n){
    std::vector<int> res;
    for(int i = 1;i<=n;i++){
        res.push_back(i * x);
    }
    return res;
}

void print_vector(const std::vector<int>& array){
    for(int num : array){
        std::cout << num << " ";
    }
    std::cout << "\r\n";
}

int main() {
    print_vector(countBy(1,10));
    print_vector(countBy(2,5));
    return 0;
}
