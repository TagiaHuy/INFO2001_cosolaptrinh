#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; // Trả về vị trí của phần tử trong mảng
        }

        if (arr[mid] < target) {
            left = mid + 1; // Tiếp tục tìm kiếm trong nửa thứ hai của mảng
        } else {
            right = mid - 1; // Tiếp tục tìm kiếm trong nửa đầu tiên của mảng
        }
    }

    return -1; // Trả về -1 nếu không tìm thấy phần tử
}

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++){
        if (arr[i] == target) {
            return i;
        }
    }

    return -1;
}

void selectionSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}


int main() {
    int arr[] = {};
    int target = ;
    int size = sizeof(arr) / sizeof(arr[0]);

    clock_t start, end;
    double cpu_time_used;

    // Đo thời gian thực thi cho Bubble sort
    start = clock();
    int result1 = linearSearch(arr, size, target);
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Thoi gian thuc thi cua linearSearch sort: %f\n", cpu_time_used);

    // Đo thời gian thực thi cho Selection sort
    start = clock();
    selectionSort(arr,size);
    int result2 = binarySearch(arr, size, target);
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Thoi gian thuc thi cua binarySearch sort: %f\n", cpu_time_used);
    printf("%d , % d",result1, result2);
    return 0;
}

