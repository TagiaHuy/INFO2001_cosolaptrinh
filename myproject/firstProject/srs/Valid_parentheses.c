#include<stdio.h>
#include<stdlib.h>
# define MAX_LENGTH 100
int check1(char* a){
    if (a[i+1] == ')') {
        a += -2;
    } else {
        check2(char* a);
    }
}

int check2(char* a){
    if (a[i+1] == '{') {
        a += -2;
    } else {
        check2(char* a);
    }
}
int myFunction(char* a) {
    int s = 0;
    int c,d,e;
    for (int i = 0; a[i] != '\0'; i++) {
        if (a[i] == '(') {
            a = 3;
    }
    printf("Result: %d\n", s); // Add this line to print the result
    return s;
}
int main() {
    char a[MAX_LENGTH];
    scanf("%s", a);
    printf("%s\n",a);
    myFunction(a);

}