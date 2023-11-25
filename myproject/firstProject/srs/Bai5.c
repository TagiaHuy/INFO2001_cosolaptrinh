#include <stdio.h>

void removeSpaces(char* str){
    int i,j;
    for(i = 0, j = 0; str[i] != '\0'; i ++){
        if (str[i] != ' ')
        {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';
}


int main() {
    char s1[100];
    fgets(s1,100,stdin);
    removeSpaces(s1);
    printf("%s",s1);
    return 0;
}