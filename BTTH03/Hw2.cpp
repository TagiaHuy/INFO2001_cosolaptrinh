#include <stdio.h>

int main() {
    float n;
    //scanf("%f",&n);
    n = 6.8;
    if (n <= 0 || n >= 10){
        printf("INVALID");
        return 0;
    }
    if (n >= 9 && n <= 10){
        printf("Xuat sac");
    } else if (n >= 8 ){
        printf("Gioi");
    } else if (n >= 6.5 ){
        printf("Kha");
    } else if (n >= 5 ){
        printf("Trung binh");
    } else {printf("Yeu");}
    return 0;
}