#include <cstring>
#include <iostream>

void foo() {
    char c, sum = -1;
    while ((c = getchar()) != '\n') {
        printf("%d ", c);
        sum += c;
    }
    printf("%d ", c);
    sum += '\n';
    printf("\r\n%d\r\n", sum);
}

void foo2(char* str) {
    char c;
    while(*str != 0){
        c = *str;
        if(c >= 'A' && c <= 'Z'){
           c = c - 'A' + 'a';
        }
        putchar(c);
        str++;
    }
}

int square_sum(const int values[/* count */], size_t count)
{
    int res = 0;
    for(int i = 0;i<count;i++){
        res += values[i] * values[i];
    }
    return res;
}

char* solution(const char *camelCase) {
    size_t len = strlen(camelCase);
    char* res = (char*)malloc(len * 2 + 1);
    int index_res = 0;
    for (int i = 0; i < len; ++i) {
        if(camelCase[i] >= 'A' && camelCase[i] <= 'Z'){
           res[index_res++] = ' ';
        }
        res[index_res++] = camelCase[i];
    }
    res[index_res++] = '\0';
    return res;
}

int main() {
    //foo2("Hello World!\r\n");
    //int values[] = {1,2,3};
    //std::cout << square_sum(values,3) << std::endl;
    std::cout << solution("helloWorld") << std::endl;
    return 0;
}
