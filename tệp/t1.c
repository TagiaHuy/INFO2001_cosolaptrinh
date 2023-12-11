#include <stdio.h>
#include <stdlib.h>
void write(char fil[]){
    FILE *file;
    file = fopen(fil,"w");
    char text[100];
    printf("nhap van ban muon viet : ");
    scanf(" %100[^\n]",text);
    if (file == NULL){
        printf("cannot open file \n");
        exit(1);
    }
    fprintf(file,"%s\n",text);
    fclose(file);
}

void read(char fil[]){
    FILE *file;
    file = fopen(fil,"rb");
    char line[256];
    if (file != NULL){
        while(fgets(line, sizeof(line), file)){
            printf("%s \n", line);
        }
    }
    fclose(file);
}

void delete(char file[]){
    remove(file);
}

void deleteLine(char fil[]){
    int lineToDelete, lineCount = 1;
    char line[256];
    printf("ban muon xoa dong thu may : ");
    scanf("%d", &lineToDelete);
    FILE *file, *temp;
    file = fopen(fil,"r");
    temp = fopen("temp.txt","w");
    while (fgets(line, sizeof(line), file))
    {
        if (lineCount != lineToDelete){
            fputs(line,temp);
        }
        lineCount++;
    }
    printf("dong thu %d da duoc xoa ", lineToDelete);
    fclose(file);
    fclose(temp);
    remove("data.txt");
    rename("temp.txt", "data.txt");
}
//Bài 1: Viết chương trình tạo tập tin văn bản chứa 1 dãy số nguyên bất kỳ.
void bai1(){
    FILE *file;
    file = fopen("bai1.txt","w");
    int num;
    printf("nhap mot day so nguyen : ");
    scanf("%d",&num);
    fprintf(file,"%d",num);
    printf("day da duoc ghi");
    fclose(file);
}



int main(){
    char file[10] = "data.txt";
    write(file);
    read(file);
    // delete("data.txt");
    // deleteLine();
    // bai1();
}