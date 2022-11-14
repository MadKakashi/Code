#include<stdio.h>

int main(){
    int principal, rate, years;
    printf("enter principal \n");
    scanf("%d",&principal);
    printf("enter rate \n");
    scanf("%d",&rate);
    printf("enter years \n");
    scanf("%d",&years);
    int simpleintrest = (principal*rate*years)/100;
    printf("the value of si is %d",simpleintrest);
    return 0;
}
    