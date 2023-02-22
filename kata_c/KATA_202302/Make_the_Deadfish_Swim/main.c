/**
 * kata: https://www.codewars.com/kata/51e0007c1f9378fa810002a9
 */
#include <malloc.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

int *parse(const char *program) {
    size_t len = strlen(program);
    int *result = malloc(len * sizeof(int));
    int res_index = 0, init_val = 0;
    for (int i = 0; i < len; i++) {
        switch (program[i]) {
            case 'i':
                init_val++;
                break;
            case 'd':
                init_val--;
                break;
            case 's':
                init_val *= init_val;
                break;
            case 'o':
                result[res_index++] = init_val;
                break;
            default:
                break;
        }
    }
    return result;
}

int main() {
    int *result = parse("iiisdoso");
    printf("%d,%d\r\n", result[0], result[1]);
    free(result);
    return 0;
}
