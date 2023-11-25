#include <stdio.h>

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++){
        if (arr[i] == target) {
            return i;
        }
    }

    return -1;
}

int main(){
    int arr[] = {2,4,1,2,4,5,3,7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    int result = linearSearch(arr, size, target);

    if (result == -1) {
        printf("khong tim thay phan tu %d trong mang \n", target);
    } else {
        printf("phan tu %d nam tai vi tri %d trong mang \n", target, result);
    }

    return 0;
}