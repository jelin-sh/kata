#include <iostream>
#include <string>
#include <bitset>
#include <cstdint>

std::string add_binary(uint64_t a, uint64_t b) {
    std::string result = std::bitset<64>(a+b).to_string();
    result.erase(0, std::min(result.find_first_not_of('0'),result.size()-1));
    return result;
}

int main() {
    std::cout << add_binary(0,0) << std::endl;
    return 0;
}
