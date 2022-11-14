#include<stdio.h>

int main(){
    int month,day,year;
    printf("Enter D.O.B:");
    scanf("%d/%d/%d",&month,&day,&year);
    printf("%.4d%.2d%.2d",year,month,day);
    return 0;
}