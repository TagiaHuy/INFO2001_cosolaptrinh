#include <stdio.h>

void convertToLowercase(char *str) {
    while (*str) {
        if (*str >= 'A' && *str <= 'Z') {
            // Nếu ký tự là chữ hoa, thì chuyển thành chữ thường
            *str = *str + 32;
        }
        // Di chuyển đến ký tự tiếp theo trong chuỗi
        str++;
    }
}

int main() {
    char inputString[100];
    printf("Nhập chuỗi: ");
    gets(inputString);

    // Gọi hàm để đổi chuỗi thành chữ thường
    convertToLowercase(inputString);

    // In ra chuỗi đã được đổi
    printf("Chuỗi sau khi chuyển thành chữ thường: %s\n", inputString);

    return 0;
}
