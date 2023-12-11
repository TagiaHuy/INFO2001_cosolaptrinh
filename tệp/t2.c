#include <stdio.h>

// Cấu trúc dữ liệu mẫu
typedef struct {
    int id;
    char name[20];
    float salary;
} Employee;

int main() {
    Employee emp1 = {1, "John Doe", 5000.0};
    Employee emp2;
    
    // Ghi dữ liệu vào tập tin nhị phân
    FILE *file = fopen("employees.bin", "wb");
    if (file == NULL) {
        printf("Không thể mở tập tin.\n");
        return 1;
    }
    
    fwrite(&emp1, sizeof(Employee), 1, file);
    
    fclose(file);
    
    // Đọc dữ liệu từ tập tin nhị phân
    file = fopen("employees.bin", "rb");
    if (file == NULL) {
        printf("Không thể mở tập tin.\n");
        return 1;
    }
    
    fread(&emp2, sizeof(Employee), 1, file);
    
    fclose(file);
    
    // In dữ liệu đã đọc
    printf("ID: %d\n", emp2.id);
    printf("Name: %s\n", emp2.name);
    printf("Salary: %.2f\n", emp2.salary);
    
    return 0;
}