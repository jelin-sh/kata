/**
 * KATA: https://www.codewars.com/kata/54bf1c2cd5b56cc47f0007a1
 */

#include <cstring>
#include <iostream>

size_t duplicateCount(const std::string& in); // helper for tests

size_t duplicateCount(const char* in)
{
    char seen[256] = {0};
    int len = (int)strlen(in);
    int count = 0;

    for(int i = 0;i<len;i++){
        char ch1 = in[i]>='a'?(char)(in[i]-'a'+'A'):in[i];
        int index = (uint8_t)ch1;
        for(int j = i+1;j<len && (seen[index] == 0);j++){
            char ch2 = in[j]>='a'?(char)(in[j]-'a'+'A'):in[j];
            if(ch1==ch2){
                count++;
                seen[index] = 1;
                //std::printf("%c ",ch1);
                break;
            }
        }
    }
    return count;
}


int main() {
    std::printf("abcde -> %zu\r\n",duplicateCount("abcde"));
    std::printf("aabbcde -> %zu\r\n",duplicateCount("aabbcde"));
    std::printf("aabBcde -> %zu\r\n",duplicateCount("aabBcde"));
    std::printf("indivisibility -> %zu\r\n",duplicateCount("indivisibility"));
    std::printf("Indivisibilities -> %zu\r\n",duplicateCount("Indivisibilities"));
    std::printf("aA11 -> %zu\r\n",duplicateCount("aA11"));
    std::printf("ABBA -> %zu\r\n",duplicateCount("ABBA"));
    return 0;
}
