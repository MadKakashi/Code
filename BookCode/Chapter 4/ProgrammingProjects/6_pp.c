#include<stdio.h>

int main(){
    int a,b,c,d,e,f,g,h,i,j,k,l,m,first_sum,second_sum,total,new,new1;
    printf("Enter 13 digit code:");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l,&m);
    first_sum=b+d+f+h+j+l;
    second_sum=a+c+e+g+i+k;
    total=(3*first_sum)+second_sum;
    total -= 1;
    total %= 10;
    new1=9-total;
    // new = total%10;
    // new1 = 9-new;
    printf("%d",new1);
    return 24;
}