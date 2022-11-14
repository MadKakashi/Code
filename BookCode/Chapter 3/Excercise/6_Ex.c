#include<stdio.h>

int main(){
    int num1,num2,denom1,denom2,result_num,result_denom;
    printf("Enter the first fraction:");
    scanf("%d / %d",&num1,&denom1);

    printf("Enter the second fraction:");
    scanf("%d / %d",&num2,&denom2);

    result_num = (num1*denom2)+(denom1*num2);
    result_denom= denom1*denom2;

    printf("%d/%d",result_num,result_denom);
    return 0;
}