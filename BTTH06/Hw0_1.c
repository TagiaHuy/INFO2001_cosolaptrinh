#include <stdio.h>
#include <stdlib.h>
int main() {
    int arr[5];
    int *ptr = NULL;
    //nhap bang pointer
    for (ptr = arr; ptr < arr + 5; ptr++){
        scanf("%d",ptr);
    }
    //hien thi bang pointer
    for (ptr = arr; ptr < arr + 5; ptr++){
        printf("%d, ",*ptr);
    }
    //tim kiem phan tu trong mang
    int ctl,id;
    do {
        printf("ban co muon tim kiem phan tu trong mang ko ? [0/1] ");
        scanf("%d",&ctl);
        printf("\nnhap vi tri phan tu trong mang ");
        scanf("%d",&id);
        ptr = arr + id;
        printf("phan tu ban can tim la %d \n",*ptr);
    } while (ctl == 1);

    return 0;
}