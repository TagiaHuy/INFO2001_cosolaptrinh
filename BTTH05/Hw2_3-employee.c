#include <stdio.h>
#include <string.h>
//Tạo cấu trúc Employee với các thông tin như mã nhân viên, tên, chức vụ,lương
// Tạo mảng cấu trúc employee

struct Employee {
    char name[31];
    char id[10];
    int age;
    char regency[15];
    float wage;
};

// struct Employee {
//     char *name;
//     char *id;
//     int age;
//     char *regency;
//     float wage;
// };
// Chương trình nhập
void EmployeeInfor(struct Employee ep[], int size){
    for (int i = 0; i < size; i++){
        printf("Nhap ten nhan vien thu %d : ", i + 1);
        scanf(" %31[^\n]",ep[i].name);
        printf("Nhap ID nhan vien : ");
        scanf(" %15[^\n]", ep[i].id);
        printf("Nhap tuoi cua nhan vien : ");
        scanf("%d", &ep[i].age);
        printf("Nhap chuc vu cua nhan vien : ");
        scanf(" %15[^\n]",ep[i].regency);
        printf("Nhap luong cua nhan vien : ");
        scanf("%f", &ep[i].wage);
    }
}
// Chương trình thêm
void addInfor(struct Employee ep[], int size){
    char ctl[4];
    int n = size-1;
    printf("ban co muon them nhan vien khong ? [yes/no] ");
    scanf("%s",ctl);
    if(ctl[0] == 'y'){
        n += 1;
        printf("Nhap ten nhan vien moi : ");
        scanf(" %31[^\n]", ep[n].name);
        printf("Nhap ID nhan vien : ");
        scanf("%s", ep[n].id);
        printf("Nhap tuoi cua nhan vien : ");
        scanf("%d", &ep[n].age);
        printf("Nhap chuc vu cua nhan vien : ");
        scanf(" %15[^\n]", ep[n].regency);
        printf("Nhap luong cua nhan vien : ");
        scanf("%f", &ep[n].wage);
        showInfor(ep,n+1);
        size += 1;
    } else {
        printf("ok ban ");
    }

}



// Chương trình xóa
void deleteInfor(struct Employee ep[], int size){
    char ctl[4], id[10];
    int i, found;
    printf("Ban co muon xa thai thang nao ko ? [yes/no] ");
    scanf(" %3[^\n]", ctl);
    if(ctl[0] != 'y'){
        printf("ok ban ");
        exit(0);
    }
    printf("Nhap id thang ban muon xa thai : ");
    scanf(" %10[^\n]", id);
    for (i = 0; i < size; i++) {
        if (strcmp(ep[i].id, id) == 0) {
            found = 1;
            break;
        }
    }

    if (found == 1) {
        struct Employee *temp = ep + i;
        memcpy(ep + i, ep + i + 1, sizeof(struct Employee));
        free(temp);
        size--;
        printf("%d",size);
    }
    showInfor(ep,size);
}



// Chương trình sắp xếp



// Chương trình hiển thị
void showInfor(struct Employee ep[] , int size){
    for (int i = 0; i < size; i++){
        printf("Name: %s, ID: %s, Age: %d, Regency: %s, Wage: %.2f\n",ep[i].name, ep[i].id, ep[i].age, ep[i].regency, ep[i].wage);
    }
}
// Chương trình thực thi
int main(){
    int size;
    printf("Nhap so nhan vien : ");
    scanf("%d",&size);
    struct Employee ep[size];
    EmployeeInfor(ep, size);
    showInfor(ep, size);
    addInfor(ep, size);
    deleteInfor(ep, size);
    // struct Employee ep[3];
    // ep[0].name = "ta gia huy"; 
    // ep[1].name = "hoang thi ba"; 
    // ep[2].name = "banh van dep";
    
    // ep[0].id = "bit123"; 
    // ep[1].id = "bit124"; 
    // ep[2].id = "bit125";
    
    // ep[0].age = 18; 
    // ep[1].age = 19; 
    // ep[2].age = 22;
    
    // ep[0].regency = "ceo"; 
    // ep[1].regency = "cong nhan"; 
    // ep[2].regency = "chat thit";
    
    // ep[0].wage = 1000000; 
    // ep[1].wage = 200000; 
    // ep[2].wage = 40000;
    // showInfor(ep, 3);
    // addInfor(ep, 3);
    return 0;
}