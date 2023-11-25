#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;  // Trả về vị trí của phần tử trong mảng
        }

        if (arr[mid] < target) {
            left = mid + 1;  // Tiếp tục tìm kiếm trong nửa thứ hai của mảng
        } else {
            right = mid - 1;  // Tiếp tục tìm kiếm trong nửa đầu tiên của mảng
        }
    }

    return -1;  // Trả về -1 nếu không tìm thấy phần tử
}

int main() {
    int arr[] = {1, 2, 5, 8, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 8;

    int result = binarySearch(arr, size, target);

    if (result == -1) {
        printf("Khong tim thay phan tu %d trong mang\n", target);
    } else {
        printf("Phan tu %d nam tai vi tri %d trong mang\n", target, result);
    }

    return 0;
}