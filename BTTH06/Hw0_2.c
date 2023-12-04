#include <stdio.h>
#include <stdlib.h>

int main() {
    int* arr = malloc(5 * sizeof(int)); // Allocate memory for 5 integers
    int *ptr = NULL;
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    for (ptr = arr; ptr < arr + 5; ptr++){
        scanf("%d",ptr);
    }

     for (ptr = arr; ptr < arr + 5; ptr++){
        printf("%d ,",*ptr);
    }
    free(arr);
    return 0;
}