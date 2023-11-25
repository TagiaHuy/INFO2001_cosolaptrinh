#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 1000

void generateRandomArray(int arr[], int size) {
    srand(time(NULL));  // Khởi tạo seed cho hàm rand() dựa trên thời gian hiện tại

    for (int i = 0; i < size; i++) {
        arr[i] = rand();  // Sinh số nguyên ngẫu nhiên
    }
}

int main() {
    int arr[ARRAY_SIZE];

    // Tạo mảng ngẫu nhiên
    generateRandomArray(arr, ARRAY_SIZE);

    // In mảng
    printf("Mang ngau nhien:\n");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ,", arr[i]);
    }
    printf("\n");

    return 0;
}