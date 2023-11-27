#include <stdio.h>
#include <string.h>
// Tạo một mảng cấu trúc Student
struct Student
{
    char name[31];
    char id[10];
    float GPA;
};
// Chương trình nhập
void StudentInfor( struct Student sv[], int size){
    for (int i = 0; i < size; i++){
        printf("nhap ten sv thu %d ", i + 1);
        getchar();
        fgets(sv[i].name, 31, stdin);
        printf("nhap id sv : ");
        scanf("%s",sv[i].id);
        printf("nhap diem trung binh cua sv : ");
        scanf("%f", &sv[i].GPA);
    }
}
// Chương trình sắp xếp

void sortInfor(struct Student sv[], int size){
    int i, j, minIndex;
    for (i = 0; i < size - 1; i++){
        minIndex = i;
        for (j = i + 1; j < size; j++){
            if (sv[j].GPA < sv[minIndex].GPA){
                minIndex = j;
            }
        }
        struct Student temp = sv[i];
        sv[i] = sv[minIndex];
        sv[minIndex] = temp;
    }

    for (int i = 0; i < size; i++){
        printf("\nTen Sv thu %d la : %s", i + 1, sv[i].name);
        printf("Id Sv la : %s \n", sv[i].id);
        printf("Diem trung binh cua Sv la : %f\n\n", sv[i].GPA);
    }
}
// Chương trình tìm kiếm
void findStudentid( struct Student sv[], int size){
    char id[10];
    int k = 0;
    printf("Nhap id sv : ");
    scanf("%s",id);
    id[strcspn(id, "\n")] = '\0';
    for (int i = 0; i < size; i++){
        if(strcmp(sv[i].id, id) == 0){
            printf("\nTen sv la : %s", sv[i].name);
            printf("Diem sv la : %f \n", sv[i].GPA);
            k = 1;
        }
    }
    if (k == 0){
        printf("\nID sv khong hop le ");
    }
}

void findStudentGrade( struct Student sv[], int s){
    float grade;
    int k, size = s + 1;
    k = 0;
    printf("Nhap diem sv : ");
    scanf("%f",&grade);
    for (int i = 0; i < size; i++){
        if(sv[i].GPA - grade == 0){
            printf("\nTen sv la : %s", sv[i].name);
            printf("ID sv la : %s \n", sv[i].id);
            k = 1;
        }
    }
    if (k == 0){
        printf("\n diem sv khong hop le ");
    }
}




// Chương trình thực thi

int main() {
    int size;
    printf("nhap so luong sv : ");
    scanf("%d", &size);
    struct Student sv[size];
    StudentInfor(sv, size);
    sortInfor(sv, size);

    printf("ban co muon tim kiem thong tin hoc sinh khong ? [yes/no] ");
    char ctl[4];
    scanf("%s",ctl);
    if (ctl[0] == 'y') {
        do {
            printf("ban muon tim kiem theo id hay theo diem ? [id/diem] ");
            scanf("%s",ctl);
            if (ctl[0] == 'i') {
                findStudentid(sv, size);
            } else {
                findStudentGrade(sv, size);
            }
            char ctl[] = "no";
        } while (ctl[0] == 'y');
    }
    printf("cam on ban");
    return 0;
}