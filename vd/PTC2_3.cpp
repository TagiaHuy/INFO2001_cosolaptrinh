#include <stdio.h>

int main() {
    int t,n,k;
    //scanf("%d %d",t,n);
    t = 2;
    n = 2001;

    if (t < 1 || t > 12) {
        printf("INVALID");
        return 0;
    }

    if (n%400 == 0) {
        k = 1;
    } else {
        k = 0;
    }

    if (k == 1 && t == 2) {
        printf("29");
        return 0;
    }

    switch (t) {
        case 1:
            printf("31");
            break;
        case 2:
            printf("28");
            break;
        case 3:
            printf("31");
            break;
        case 4:
            printf("30");
            break;
        case 5:
            printf("31");
            break;
        case 6:
            printf("30");
            break;
        case 7:
            printf("31");
            break;
        case 8:
            printf("31");
            break;
        case 9:
            printf("30");
            break;
        case 10:
            printf("31");
            break;
        case 11:
            printf("30");
            break;
        case 12:
            printf("31");
            break;
    }
    return 0;
}