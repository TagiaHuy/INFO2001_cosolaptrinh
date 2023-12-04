#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    char name[31];
    float GPA;
} SV;


int main() {
    SV *arr;
    int n, i;
    printf("Nhap so luong sinh vien : ");
    scanf("%d", &n);
    // Cấp phát bộ nhớ cho mảng
    arr = (SV*)malloc(n * sizeof(SV));
    // Kiểm tra xem bộ nhớ có được cấp phát thành công không
    if (arr == NULL) {
        printf("Khong the cap phat bo nho.");
        exit(1);
    }
    // Nhập giá trị cho mảng
    for (i = 0; i < n; i++) {
        printf("Nhap ten sinh vien thu %d: ", i + 1);
        scanf(" %31[^\n]", arr[i].name);
        printf("Nhap diem sinh vien : ");
        scanf("%f",&arr[i].GPA);
    }
    // In giá trị của mảng
    printf("Cac phan tu trong mang: ");
    for (i = 0; i < n; i++) {
    printf("ten %s diem %f \n", arr[i].name, arr[i].GPA);
    }
    // Giải phóng bộ nhớ khi không cần sử dụng nữa
    free(arr);
    return 0;
}