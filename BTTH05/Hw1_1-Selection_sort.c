#include <stdio.h>
#include <stdlib.h>

void selectionSort(int arr[], int size)
{
    int i, j, c, minIndex;

    for (i = 0; i < size - 1; i++)
    {
        minIndex = i;
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        c = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = c;
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
    selectionSort(arr, 10);
    printf("The sorted array is: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    getchar();
    return 0;
}
