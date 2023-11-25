#include <stdio.h>

struct Student {
    int maSV;
    char tenSV[30];
};

int main() {
    int n,t;
    char ctl[4];
    printf("ban muon nhap bao nhieu sinh vien ? ");
    scanf("%d", &n);

    // Allocate memory for an array of n Students
    struct Student std[n];
    for (int i =0; i < n; i++){
        printf("ma SV thu %d la : %d \n", i+1, i);
        std[i].maSV = i;
        printf("nhap ten SV ");
        // Get a newline-terminated string
        getchar();
        fgets(std[i].tenSV, 30, stdin);
    }

    printf("\nthong tin SV ban vua nhap la : \n");
    for (int i = 0; i < n; i++){
        printf("ma SV %d \n", i);
        printf("ten SV %s\n", std[i].tenSV);
    }
    printf("ban co muon sua lai thong tin SV khong ? [y/n]\n");
    getchar();
    fgets(ctl, 2, stdin);
    if (ctl [0] == 'y') {
        do {
            printf("nhap ma so sv muon sua : ");
            scanf("%d", &t);
            printf("sua lai ten SV : ");
            getchar();
            fgets(std[t].tenSV, sizeof std[t].tenSV, stdin);
            printf("ban co muon sua lai nua khong ? [y/n]");
            getchar();
            fgets(ctl, sizeof ctl, stdin);
        } while (ctl[0] == 'y');
    }
    return 0;
}
