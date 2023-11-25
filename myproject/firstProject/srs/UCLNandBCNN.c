#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int gcd(int a, int b) {
    int remainder;
    
    while (b != 0) {
        remainder = a % b;
        //printf("%d",remainder);
        a = b;
        b = remainder;
    }
    
    return a;
}



int main() {
    printf("%d",gcd(5,124));
    return 0;
}