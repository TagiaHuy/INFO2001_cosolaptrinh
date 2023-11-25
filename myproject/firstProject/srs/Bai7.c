#include <stdio.h>

void convertToLowercase(char* str){
    while (*str) {
        if (*str >= 'A' && *str <= 'Z') {
            *str = *str + 32;
        }
        str ++;
    }
}

int main() {
    char string[100];
    fgets(string,100,stdin);
    convertToLowercase(string);
    printf("chuoi sau khi chuyen thanh chu thuong: %s",string);
    return 0;
}