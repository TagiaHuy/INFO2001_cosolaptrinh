#include <stdio.h>
#include <string.h>
#define MAX_LINE_LENGTH 100
#define MAX_LINES 5
int main() {
FILE *file;
char lines[MAX_LINES][MAX_LINE_LENGTH];
char newInfo[] = "Thong tin moi cua sinh vien thu 3\n";
int lineCount = 0;
// Mở tệp với chế độ r+
file = fopen("New Text Document.txt", "r+");
if (file == NULL) {
perror("Khong the mo tep");
return 1;
}
// Đọc và lưu trữ nội dung tệp
while (fgets(lines[lineCount], MAX_LINE_LENGTH, file) != NULL
&& lineCount < MAX_LINES) {
lineCount++;
}
// Sửa đổi dòng thứ 3
if (lineCount >= 3) {
strcpy(lines[2], newInfo);
}
// Đặt lại con trỏ tệp và ghi lại nội dung
fseek(file, 0, SEEK_SET);
for (int i = 0; i < lineCount; i++) {
fputs(lines[i], file);
}
fclose(file);
printf("Cap nhat thong tin sinh vien thanh cong.\n");
return 0;
}