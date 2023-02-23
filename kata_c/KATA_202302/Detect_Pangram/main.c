#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#define BIT_SET(BUF, BIT) ((BUF) |= 1 << ((BIT)))
bool is_pangram(const char *str_in) {
    uint32_t buf = 0;
    for (int i = 0; i < strlen(str_in); ++i) {
        switch (str_in[i]) {
            case 'a' ... 'z':
                BIT_SET(buf,str_in[i] - 'a');
                break ;
            case 'A' ... 'Z':
                BIT_SET(buf,str_in[i] - 'A');
                break ;
            default:
                break ;
        }
    }
    return buf == 0x3FFFFFF;
}
int main() {
    if (is_pangram("ABCDEFGHIJKLMNOPQRSTUVWXYZ")) {
        printf("Hello, World!\n");
    }
    return 0;
}
