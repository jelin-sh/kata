/**
 * kata: https://www.codewars.com/kata/576757b1df89ecf5bd00073b
 */
#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> towerBuilder(unsigned nFloors) {
    const unsigned width = 2 * nFloors - 1;
    const unsigned center = width / 2;
    std::vector<std::string> tower{};
    std::string buf = std::string(width,' ');
    unsigned i = 0;
    for (unsigned j = 0; j < nFloors; ++j) {
        buf[center - i] = '*';
        buf[center + i] = '*';
        tower.push_back(buf);
        ++i;
    }
    return tower;
}
int main() {
    //---
    std::cout << towerBuilder(1)[0] << std::endl;
    //---
    auto v = towerBuilder(3);
    for (auto &s : v) {
        std::cout << s << std::endl;
    }
    return 0;
}
