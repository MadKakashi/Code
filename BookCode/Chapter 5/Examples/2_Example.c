#include<stdio.h>

int main(){
    int month,day,year;
    printf("Enter date (mm/dd/yy):");
    scanf("%d/%d/%d",&month,&day,&year);
    printf("Dated this %d",day);
    switch(day){
        case 1: case 21: case 31: printf("st"); break;
        case 2: case 22: printf("nd"); break;
        case 3: case 23: printf("rd"); break;
        default: printf("th"); break;
    }
    printf(" day of ");

    switch(month){
        case 1: printf("January");
        case 2: printf("Feb");
        case 3: printf("Mar");
        case 4: printf("Apr");
        case 5: printf("may");
        case 6: printf("june");
        case 7:printf("july");
        case 8:printf("aug");
        case 9:printf("sept");
        case 10:printf("oct");
        case 11:printf("nov");
        case 12:printf("dec");
}
    printf(", 20%.2d.",year);

    return 0;
}