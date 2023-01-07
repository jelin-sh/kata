/**
 * KATA: https://www.codewars.com/kata/55c04b4cc56a697bb0000048
 */

#include <iostream>
#include <string>

#if 0 //This is my solution, test passed and result time 9258ms
bool scramble(std::string s1, const std::string &s2) {
    for (char c: s2) {
        size_t pos = s1.find(c);
        if (pos == std::string::npos) {
            return false;
        }
        s1[pos] = ' ';
    }
    return true;
}
#else //This is other solution, test passed and result time 4730ms
#include <algorithm>

/**
 * Note:
 * std::includes 是一个非常有用的STL函数，它检查一个排序范围是否包括另一个排序范围。
 * 换句话说，它有助于检查一个集合是否是另一个集合的子集，或者不考虑该集合是有序的。
 * 不用说，两个范围/组都必须以相同的方式排序，即，要么以升序要么都以降序排序。 否则，它将无法检测。
 */
bool scramble(std::string s1, std::string s2){
    std::sort(begin(s1), end(s1));
    std::sort(begin(s2), end(s2));
    return std::includes(begin(s1), end(s1), begin(s2), end(s2));
}

#endif
int main() {
    std::cout << scramble("rkqodlw", "world") << std::endl;
    std::cout << scramble("cedewaraaossoqqyt", "codewars") << std::endl;
    std::cout << scramble("katas", "steak") << std::endl;
    std::cout << scramble("scriptjavx", "javascript") << std::endl;
    return 0;
}
