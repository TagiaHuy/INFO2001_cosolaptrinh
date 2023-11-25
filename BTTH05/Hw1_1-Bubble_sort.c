#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int arr[], int size)
{
    int temp, j, i = 0;
	for (j = 0; j < size - 1; j++)
    {
        for (i = 0; i < size - j - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}

int main()
{
	int i; 
    int arr[10] = {12, 18, 8, 6, 5, 14, 10, 1, 2, 9};

    printf("The original array is: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }   
    printf("\n");
    bubble_sort(arr, 10);
    printf("The sorted array is: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    getchar();
    return 0;
}
