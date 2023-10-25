#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if (n % 2 == 0){
        printf("%d la so chan",n);
        return 0;
    }
    printf("%d la so le",n);
    return 0;
}