#include <stdio.h>

int main() {
    int a;
    //scanf("%d",a);

    a = 30;
    if (a%3 == 0 and a%5 == 0) {
        printf("1");
    } else {
        printf("0");
    }
    return 0;
}