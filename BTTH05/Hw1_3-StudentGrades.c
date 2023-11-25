#include <stdio.h>
float GPA(int arr[], int size) {
    int GPA = 0;
    for (int i = 0; i < size; i++) {
        GPA += arr[i];
    }
    return GPA / (float)size;
}

int main() {
    int size;
    printf("lop hoc cua ban co bao nhieu SV ? :\n");
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++) {
        printf("Nhap diem nguoi thu %d : ", i+1);
        scanf("%d", &arr[i]);
        printf("\n");
    }

    float gpa = GPA(arr, size);
    printf("diem trung binh cua ca lop la : %f", gpa);


    return 0;
}