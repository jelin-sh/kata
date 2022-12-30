/**
 * Kata: https://www.codewars.com/kata/51f2d1cafc9c0f745c00037d
 *
 * Complete the solution so that it returns true if the first argument(string) passed in ends with the 2nd
 * argument (also a string).
 *
 * Examples:
 *  solution('abc', 'bc') // returns true
 *  solution('abc', 'd') // returns false
 */

#include <iostream>
#include <cstring>

bool solution(const char *string, const char *ending)
{
    int s1_len = strlen(string);
    int s2_len = strlen(ending);
    return s1_len >= s2_len && !strcmp(string + s1_len - s2_len, ending);
}

int main() {
    printf("%d\r\n", solution("abc", "bc"));
    printf("%d\r\n", solution("abc", "d"));
    printf("%d\r\n", solution("abc", ""));
    return 0;
}
