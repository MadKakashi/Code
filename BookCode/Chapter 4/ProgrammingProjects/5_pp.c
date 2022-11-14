#include<stdio.h>

int main(){
    int a,b,c,d,e,f,g,h,i,j,k,l,first_sum,second_sum,total;
    printf("Enter the 11th digit number:");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l);
    first_sum=a+c+e+g+i+k;
    second_sum=b+d+f+h+j;
    total = 3*first_sum+second_sum;
    printf("checkdigit:%d\n",9-((total-1)%10));
    printf("%d%d%d%d%d%d%d%d%d%d%d",a,b,c,d,e,f,g,h,i,j,k,l);
    return 0;
}