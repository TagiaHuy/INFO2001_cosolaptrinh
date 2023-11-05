#include <stdio.h>

int main() {
    int a, b;
    
    // Prompt the user for input
    printf("Enter the value of a: ");
    scanf("%d", &a);
    
    printf("Enter the value of b: ");
    scanf("%d", &b);
    
    // Calculate the sum
    int sum = a + b;
    
    // Print the result
    printf("Sum of a and b is: %d\n", sum);
    
    return 0;
}
