#include <stdio.h>

int main() {
    int n,i,s;
    n = 6;
    i = 1;
    s = 0;

    for (i;i <= n;i += 2) {
        s += i;
    }
    printf("%d",s);
    return 0;
}