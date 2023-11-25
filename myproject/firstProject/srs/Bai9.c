#include <stdio.h>

void swapAlternateCase(char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        // Check if the current character is an uppercase letter
        if (str[i] >= 'A' && str[i] <= 'Z') {
            // Convert to lowercase
            str[i] += 32;
        }
        // Check if the current character is a lowercase letter
        else if (str[i] >= 'a' && str[i] <= 'z') {
            // Convert to uppercase
            str[i] -= 32;
        }
    }
}

int main() {
    char inputString[100];

    // Input the string
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Remove the newline character at the end of the input
    int len = 0;
    while (inputString[len] != '\n' && inputString[len] != '\0') {
        len++;
    }
    if (inputString[len] == '\n') {
        inputString[len] = '\0';
    }

    // Call the function to swap alternate case
    swapAlternateCase(inputString);

    // Output the result
    printf("String after swapping alternate case: %s\n", inputString);

    return 0;
}
