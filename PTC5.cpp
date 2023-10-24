#include <math.h>
#include <stdio.h>
int main() {
    int a,i,n;
    a = 1;
    i = 2;
    if (a == 1) {
        printf("%d ko phai la so nguyen to",a);
        return 0;
    }
    while (i <= sqrt((float)a)) {
        if (a % i == 0){
            printf ("%d ko phai so nguyen to",a);
            return 0;}
        i ++;
    }
    printf("%d la so nguyen to",a);

    return 0;
}