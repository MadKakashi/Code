#include<stdio.h>

int main(){
    int gsi,group,code,itemnumber,checkdigit;
    printf("Enter the ISBN:");
    scanf("%d-%d-%d-%d-%d",&gsi,&group,&code,&itemnumber,&checkdigit);
    printf("GSI prefix:%d\n",gsi);
    printf("Group identifier:%d\n",group);
    printf("Publisher code:%d\n",code);
    printf("Item number:%d\n",itemnumber);
    printf("Check digit:%d\n",checkdigit);
    return 0;
}