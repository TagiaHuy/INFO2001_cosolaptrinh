#include <stdio.h>
#include <string.h>
#define maxstudents 100

struct Student{
 int age;
 char id[20];
 char name[50];
 float gpa;
};

void changeStudent(struct Student *s){
 printf("\nNhap ma sinh vien: ");
 scanf("%s", &s->id);
 printf("Nhap ho va ten: ");
//  getchar();
//  fgets(s->name,50,stdin);
 scanf(" %50[^\n]",s->name);
 printf("Nhap tuoi: ");  
 scanf("%d", &s->age);
 printf("Diem trung binh cua ban la: ");
 scanf("%f", &s->gpa);
}


int main(){
 int choice, i = 0, numstudents=0;
 struct Student s[100];
 do{
 printf("\nQUAN LY SINH VIEN:\n");
 printf("1. Them sinh vien:\n");
 printf("2. Hien thi thon tin sinh vien:\n");
 printf("3. Cap nhat thong tin sinh vien:\n");
 printf("0. Thoat.\n");
 if(numstudents>0){
  printf("LUU Y: Neu ban muon cap nhat thong tin\nvui long xem so thu tu o muc 2.\n");
 }
 printf("\nNhap su lua chon cua ban: ");
 scanf("%d", &choice);
  switch(choice){
   case 1:
    if(numstudents<maxstudents){
    printf("\nNhap ma sinh vien: ");
    scanf(" %20[^\n]", s[i].id);
    printf("Nhap ho va ten: "); 
    //  getchar();
    //  fgets(s[i].name,50,stdin);
     scanf(" %50[^\n]",s[i].name);

     printf("Nhap tuoi: ");
     scanf("%d", &s[i].age);
     printf("Diem trung binh cua ban la: ");
     scanf("%f", &s[i].gpa);
     numstudents++;
     i++;
     printf("Them sinh vien thanh cong!");
     printf("\n");
    }else{
     printf("Sinh vien da day!");
    } break;
   case 2:
    if(numstudents>0){
     printf("\nDanh sach sinh vien:");
     for(i=0;i<numstudents;i++){
      printf("\nSinh vien %d",i+1);
      printf("\nMa sinh vien: %s\n",s[i].id);
      printf("Ho va ten: %s \n",s[i].name);
      printf("Tuoi: %d\n",s[i].age);
      printf("Diem trung binh: %.1f\n",s[i].gpa);
      printf("\n");
     }
    }else{
     printf("Chua co thong tin!");
    }break;
   case 3:
    printf("Nhap so thu tu sinh vien can cap nhat: \n");
    int change;
    scanf("%d", &change);
    if(change>=1,change<=numstudents){
     changeStudent(&s[change-1]);
     printf("Cap nhat thanh cong!\n");
    }else{
     printf("So thu tu khong hop le!\n");
    }break;
   case 4:
    
   default:
    printf("Lua chon khong hop le!\n");
  }

 }while(choice!=0);
  printf("Da ket thuc!");
 
return 0;
}