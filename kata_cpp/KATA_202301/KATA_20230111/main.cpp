/**
 * KATA: https://www.codewars.com/kata/5263c6999e0f40dee200059d
 */

#include <iostream>
#include <map>
#include <vector>

class KeypadCracker {
public:
    explicit KeypadCracker(const std::string &observed) {
        static const std::map<char,std::string> stage_all = {
                {'1', "124"},
                {'2', "2135"},
                {'3', "326"},
                {'4', "4517"},
                {'5', "54628"},
                {'6', "6539"},
                {'7', "784"},
                {'8', "87950"},
                {'9', "986"},
                {'0', "08"},
        };

        stage.clear();
        for (char c: observed) {
            stage.push_back(stage_all.at(c));
        }
    }

    std::vector<std::string> crack() {
        cracked.clear();
        crack_stage("", 0);
        return cracked;
    }

private:
    void crack_stage(const std::string &prefix, int index) {
        if (index == stage.size()-1) {
            for (char c: stage[index]) {
                cracked.push_back(prefix + c);
            }
            return;
        }
        for (char c: stage[index]) {
            crack_stage(prefix + c, index + 1);
        }
    }

private:
    std::vector<std::string> stage;
    std::vector<std::string> cracked;
};

std::vector<std::string> get_pins(const std::string &observed) {
    KeypadCracker cracker(observed);
    return cracker.crack();
}

int main() {
    get_pins("0123456789");
    return 0;
}
