/**
 * KATA:https://www.codewars.com/kata/5264d2b162488dc400000001
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void spin_words(const char *sentence, char *result) {
    int i = 0;
    const char *word_begin = sentence;
    const char *word_end;

    for(int j = 0;j < strlen(sentence)+1;j++){
        if(sentence[j] == ' ' || sentence[j] == '\0'){
            size_t word_len;
            word_end = &sentence[j-1];
            word_len = word_end - word_begin;
            if (word_len >= 5) {
                for (const char* index = word_end; index >= word_begin; index--) {
                    result[i++] = *index;
                }
                result[i++] = ' ';
            } else {
                for (const char* index = word_begin; index <= word_end; index++) {
                    result[i++] = *index;
                }
                result[i++] = ' ';
            }
            word_begin = &sentence[j+1];
        }
    }
    result[i-1] = '\0';
}

int main() {
    const char* input ="Hey fellow warriors";
    char* res = malloc(strlen("Hey fellow warriors")+1);
    spin_words(input,res);
    printf("%s\r\n",res);
    return 0;
}
