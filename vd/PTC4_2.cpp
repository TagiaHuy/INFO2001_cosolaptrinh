#include <stdio.h>

int main() {
    int i,n,k,sum;
    //scanf("%d",&n);
    n = 10;
    sum = 0;
    k = 0;
    i = 1;
    while (k <= n) {
        sum += i;
        i += 2;
        k += 1;
    }

    printf("%d\n",sum );
    return 0;
}