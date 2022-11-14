//wap to accept 2 numbers form users,swap them
#include<stdio.h>

int main(){
    int a,b,c;

    printf("Enter the first number:");
    scanf("%d",&a);

    printf("Enter the second number:");
    scanf("%d",&b);

    printf("Before swapping a=%d and b=%d\n",a,b);

    c=a;
    a=b;
    b=c;

    printf("After swapping a=%d and b=%d",a,b);
    





    return 0;
}