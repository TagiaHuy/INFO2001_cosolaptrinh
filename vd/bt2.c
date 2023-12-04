#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    char name[51];
    char author[31];
    float price;
} Book;


int main() {
    Book *arr;
    int n, i;
    printf("Nhap so luong sach : ");
    scanf("%d", &n);
    // Cấp phát bộ nhớ cho mảng
    arr = (Book*)malloc(n * sizeof(Book));
    // Kiểm tra xem bộ nhớ có được cấp phát thành công không
    if (arr == NULL) {
        printf("Khong the cap phat bo nho.");
        exit(1);
    }
    // Nhập giá trị cho mảng
    for (i = 0; i < n; i++) {
        printf("Nhap ten sach thu %d: ", i + 1);
        scanf(" %51[^\n]", arr[i].name);
        printf("Nhap ten tac gia : ");
        scanf(" %31[^\n]", arr[i].author);
        printf("Nhap gia sach : ");
        scanf("%f", &arr[i].price);
    }
    // In giá trị của mảng
    printf("Cac phan tu trong mang: \n");
    for (i = 0; i < n; i++) {
    printf("ten sach: %s \ntac gia: %s \ngia sach: %f \n", arr[i].name, arr[i].author, arr[i].price);
    }
    // Giải phóng bộ nhớ khi không cần sử dụng nữa
    free(arr);
    return 0;
}