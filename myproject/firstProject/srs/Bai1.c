#include <stdio.h>
#include <stdlib.h>
struct ThoiGian
{
    /* data */
    int gio;
    int phut;
    int giay;
};

int check(struct tg){
    if (tg.hour > 24 && tg.hour < 0){
        return 0;
    }
    if (tg.minute > 60 && tg.hour < 0){
        return 0;
    }
    if (tg.second > 60 && tg.hour < 0){
        return 0;
    }
    return 1;

}
int main(){
    struct ThoiGian tg[2];
    do {
        for (int i = 0; i < 2; i++){
        printf("nhap gio %d ", i+1);
        scanf("%d", &tg[i].gio);
        printf("nhap phut ");
        scanf("%d", &tg[i].phut);
        printf("nhap giay ");
        scanf("%d",&tg[i].giay);
    } while {check(tg[0])}
    }
    int ktg = abs((tg[0].gio*3600 + tg[0].phut*60 + tg[0].giay)-(tg[1].gio*3600 + tg[1].phut*60 + tg[1].giay));
    int totalStart = tg[0].gio*3600 + tg[0].phut*60 + tg[0].giay;
    int totalEnd = tg[1].gio*3600 + tg[1].phut*60 + tg[1].giay;
    int diff = abs(totalStart - totalEnd);
    int hour = diff/3600;
    int minute = (diff - hour*3600)/60;
    int second = diff - hour*3600 - minute*60;
    printf("Do chenh lech thoi gian la %d:%d:%d",hour , minute, second);

    return 0;

}