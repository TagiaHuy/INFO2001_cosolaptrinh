#include <stdio.h>
#include <stdlib.h>
int main() {
int *arr;
int n, i;
printf("Nhap so luong phan tu: ");
scanf("%d", &n);
// Cấp phát bộ nhớ cho mảng
arr = (int*)malloc(n * sizeof(int));
// Kiểm tra xem bộ nhớ có được cấp phát thành công không
if (arr == NULL) {
printf("Khong the cap phat bo nho.");
exit(1);
}
// Nhập giá trị cho mảng
for (i = 0; i < n; i++) {
printf("Nhap phan tu %d: ", i + 1);
scanf("%d", arr + i);
}
// In giá trị của mảng
printf("Cac phan tu trong mang: ");
for (i = 0; i < n; i++) {
printf("%d ", *(arr + i));
}
// Giải phóng bộ nhớ khi không cần sử dụng nữa
free(arr);
return 0;
}