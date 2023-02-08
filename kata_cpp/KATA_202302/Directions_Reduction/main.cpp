/**
 * kata: https://www.codewars.com/kata/550f22f4d758534c1100025a
 */
#include <iostream>
#include <vector>

class DirReduction
{
public:
    static std::vector<std::string> dirReduc(std::vector<std::string> &arr){
        std::vector<std::string> result;
        for (auto &dir : arr) {
            if (result.empty()) {
                result.push_back(dir);
            } else {
                if (dir == "NORTH" && result.back() == "SOUTH") {
                    result.pop_back();
                } else if (dir == "SOUTH" && result.back() == "NORTH") {
                    result.pop_back();
                } else if (dir == "EAST" && result.back() == "WEST") {
                    result.pop_back();
                } else if (dir == "WEST" && result.back() == "EAST") {
                    result.pop_back();
                } else {
                    result.push_back(dir);
                }
            }
        }
        return result;
    }
};


int main() {
    //std::cout << "Hello, World!" << std::endl;
    std::vector<std::string> d1 = {"NORTH", "SOUTH", "SOUTH", "EAST", "WEST", "WEST", "NORTH"};
    std::vector<std::string> ans1 = DirReduction::dirReduc(d1);
    std::vector<std::string> sol1 = {"WEST"};
    std::cout << "Test 1: " << (ans1 == sol1 ? "OK" : "FAIL") << std::endl;
    return 0;
}
