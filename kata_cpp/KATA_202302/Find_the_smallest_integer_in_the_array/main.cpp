/**
 * kata: https://www.codewars.com/kata/55a2d7ebe362935a210000b2
 */
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

//int findSmallest(vector <int> list)
//{
//    std::set<int> res(list.begin(),list.end());
//    return *res.begin();
//}

int findSmallest(vector <int> list)
{
    return *std::min_element(list.begin(),list.end());
}

int main() {
    std::cout << findSmallest({3,5,2}) << std::endl;
    std::cout << findSmallest({7,4,6,8}) << std::endl;
    std::cout << findSmallest({17,21,15,36,96}) << std::endl;
    std::cout << findSmallest({3,9,13,10,5,3,9,5}) << std::endl;
    return 0;
}
