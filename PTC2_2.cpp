#include <stdio.h>

int main() {
    int a;
    //scanf("%d",&a);
    a = -400;
    if (a <= 0) {
        printf("INVALID");
        return 0;
    }
    if (a%400 == 0) {
        printf("Yes");
    } else {
        printf("NO");
    }
    return 0;
}
