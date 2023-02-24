/**
 * KATA: https://www.codewars.com/kata/55c45be3b2079eccff00010f
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *order_words(char *ordered, const char *words) {
    char *word[9] = {0};
    size_t buf_len = strlen(words) + 1;
    char *buf = malloc(buf_len);
    char *p = buf;

    memset(buf, 0, buf_len);
    strcpy(buf,words);

    for (int i = 0; i < buf_len; ++i) {
        switch (buf[i]) {
            case ' ':
                buf[i] = '\0';
                p = &buf[i+1];
                break;
            case '1' ... '9':
                word[buf[i] - '1'] = p;
                break;
            default:
                break;
        }
    }

    *ordered = '\0';
    size_t res_len = 0;
    for (int i = 0; i < 9; i++) {
        if (word[i] != NULL) {
            strcpy(ordered + res_len, word[i]);
            res_len = strlen(ordered);
            ordered[res_len++] = ' ';
        }
    }
    ordered[res_len-1] = '\0';
    free(buf);
    return ordered;
}

int main() {
    char *test_str = "5jvea mqhpp3 hrwvpgdq1e 4spiplxvq 2rgosos";
    char *res = malloc(strlen(test_str) + 1);
    memset(res,0,strlen(test_str) + 1);
    printf("%s\r\n", order_words(res, test_str));
    return 0;
}
