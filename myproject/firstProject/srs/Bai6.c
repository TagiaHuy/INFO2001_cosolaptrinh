#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    char s1[100],s2[100];
    fgets(s1,100,stdin);
    fgets(s2,100,stdin);
    s1[strcspn(s1,"\n")] = '\0';
    s2[strcspn(s2,"\n")] = '\0';
    strcat(s1,s2);
    printf("\n%s",s1);
    return 0;
}