#include <stdio.h>

void convertToUpercase(char* str){
    while (*str) {
        if (*str >= 'a' && *str <= 'z') {
            *str = *str - 32;
        }
        str ++;
    }
}

int main() {
    char string[100];
    fgets(string,100,stdin);
    convertToUpercase(string);
    printf("chuoi sau khi chuyen thanh chu hoa
    : %s",string);
    return 0;
}