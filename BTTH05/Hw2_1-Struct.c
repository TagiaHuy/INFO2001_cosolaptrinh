#include <stdio.h>
#include <string.h>
// Tạo một mảng cấu trúc Student
struct Student {
    char name[31];
    char id[10];
    int age;
    float GPA;
};

// Chương trình nhập 
void studentInfor( struct Student sv[], int n){
    for (int i = 0; i < n; i++){
        printf("Nhap ten Sv thu %d : ", i+1);
        getchar();
        fgets(sv[i].name, 31, stdin);
        printf("Nhap ID Sv : ");
        fgets(sv[i].id, 10, stdin);
        sv[i].id[strcspn(sv[i].id, "\n")] = '\0';
        printf("Nhap tuoi Sv : ");
        scanf("%d",&sv[i].age);
        printf("Nhap diem trung binh cua Sv : ");
        scanf("%f",&sv[i].GPA);
    }

}

// Chương trình hiển thị
void showInfor( struct Student sv[] , int n){
    for (int i = 0; i < n; i++){
        printf("\nTen Sv thu %d la : %s", i + 1, sv[i].name);
        printf("Id Sv moi nhap la : %s \n", sv[i].id);
        printf("Tuoi Sv vua moi nhap la : %d\n", sv[i].age);
        printf("Diem trung binh cua Sv la : %f\n\n", sv[i].GPA);
    }
}

// Chương trình cập nhật thông tin sinh viên
void update( struct Student sv[] , int size){
    int k = 0;
    char id[10];
    printf("Nhap id Sv : ");
    getchar();
    fgets(id,10,stdin);
    id[strcspn(id, "\n")] = '\0';
    for (int i = 0; i < size; i++){
        if(strcmp(sv[i].id, id) == 0){
            printf("Nhap lai ten Sv : ");
            fgets(sv[i].name, 31, stdin);
            printf("Nhap tuoi Sv : ");
            scanf("%d",&sv[i].age);
            printf("Nhap diem trung binh cua Sv : ");
            scanf("%f",&sv[i].GPA);
            k = 1;
            showInfor(sv,size);
        }
    }
    if (k == 0){
        printf("\nID Sv khong hop le ");
    }
}

// main
int main(){
    int n;
    printf("Nhap so Sv : ");
    scanf("%d",&n);
    struct Student sv[n];
    studentInfor(sv, n);
    showInfor(sv, n);

    printf("Ban co muon sua lai thong tin khong ? [yes/no] ");
    char ctl[4];
    getchar();
    fgets(ctl,4,stdin);
    if (ctl[0] == 'y') {
        do {
            update(sv, n);
            printf("Ban co muon sua tiep khong ? [yes/no] ");
            getchar();
            fgets(ctl,4,stdin);
        } while (ctl[0] == 'y' || ctl[0] == 'e');
    } 
    printf("cam on ban");
    return 0;
}