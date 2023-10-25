#include <stdio.h>

int main() {
    int n,i,s,dl;
    scanf("%d",&n);
    i = 1;
    s = 0;
    dl = 0;

    for (i; dl < n;i += 2) {
        s += i;
        dl ++;
    }
    printf("%d",s);
    return 0;
}