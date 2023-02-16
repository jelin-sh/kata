/**
 * KATA:https://www.codewars.com/kata/56541980fa08ab47a0000040
 */

#include <functional>
#include <iostream>
#include <numeric>
class Printer {
public:
//    static std::string printerError(const std::string &s) {
//        int error = std::accumulate(s.begin(), s.end(), 0, [](int a, int b) {
//            return a + (b > 'm' || b < 'a');
//        });
//        return std::to_string(error) + "/" + std::to_string(s.size());
//    }

    static std::string printerError(const std::string &s) {
        size_t len = s.length();
        size_t error = std::count_if(s.begin(), s.end(), [](char c) {
            return c > 'm' || c < 'a';
        });
        return std::to_string(error) + "/" + std::to_string(len);
    }
};
int main() {
    std::cout << Printer::printerError("aaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbmmmmmmmmmmmmmmmmmmmxyz") << std::endl;
    std::cout << Printer::printerError("kkkwwwaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbmmmmmmmmmmmmmmmmmmmxyz") << std::endl;
    std::cout << Printer::printerError("kkkwwwaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbmmmmmmmmmmmmmmmmmmmxyzuuuuu") << std::endl;
    return 0;
}
