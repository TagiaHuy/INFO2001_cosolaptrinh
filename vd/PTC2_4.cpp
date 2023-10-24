#include <stdio.h>

int main() {
    int i,n,sum;
    //scanf("%d",&n);
    n = 10;
    sum = 0;
    i = 1;
    while (i <= n) {
        sum += i*i;
        i ++;
    }

    printf("%d\n",sum );
    return 0;
}