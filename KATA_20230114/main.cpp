/**
 * KATA: https://www.codewars.com/kata/58678d29dbca9a68d80000d7
 */

#include <iostream>
#include <vector>

std::string interpreter(const std::string &code, const std::string &tape) {
    int tapeIndex = 0;
    int jump = 0;
    std::string output(tape);
    std::vector<int> loopStack;

    for (int i = 0;i<code.length();i++) {
        char ch = code[i];
        if(tapeIndex < 0 || tapeIndex >= tape.length()) {
            break ;
        }
        switch (ch) {
            case '<': tapeIndex--; break;
            case '>': tapeIndex++; break;
            case '*': output[tapeIndex] = (output[tapeIndex] == '0' ? '1' : '0'); break;
            case ']':
                if(output[tapeIndex] == '1' && !loopStack.empty()){
                    i = loopStack.back();
                }else if(!loopStack.empty()){
                    loopStack.pop_back();
                }
               break;
            case '[':
                if(output[tapeIndex] == '1'){
                    loopStack.push_back(i);
                }
                else{
                    jump = 1;
                    while(jump > 0 && i < code.length()){
                        i++;
                        if(code[i] == '['){
                            jump++;
                        }
                        else if(code[i] == ']'){
                            jump--;
                        }
                    }
                }
                break;
            default: break;
        }
    }
    return output;
}

int main() {
    std::string tape = "10000000";
    std::cout << tape << " => " <<  interpreter("[>*]",tape) << std::endl; //00000000

    return 0;
}
