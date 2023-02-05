/**
 * kata: https://www.codewars.com/kata/5672682212c8ecf83e000050/cpp
 */

#include <algorithm>
#include <cmath>
#include <iostream>
#include <set>
#include <vector>

class DoubleLinear
{
public:
    static int dblLinear(int n);
};

int DoubleLinear::dblLinear(int n) {
    std::set<int> res{1};
    auto it = res.begin();
    for(int i = 0;i<n;i++) {
        res.insert(*it*2+1);
        res.insert(*it*3+1);
        it++;
    }
    return *it;
}


int main() {
    std::cout << DoubleLinear::dblLinear(10) << std::endl;
    std::cout << DoubleLinear::dblLinear(20) << std::endl;
    std::cout << DoubleLinear::dblLinear(30) << std::endl;
    std::cout << DoubleLinear::dblLinear(50) << std::endl;
    std::cout << DoubleLinear::dblLinear(500) << std::endl;
    std::cout << DoubleLinear::dblLinear(1000) << std::endl;
    std::cout << DoubleLinear::dblLinear(2000) << std::endl;
    std::cout << DoubleLinear::dblLinear(6000) << std::endl;
    std::cout << DoubleLinear::dblLinear(60000) << std::endl;

    return 0;
}
