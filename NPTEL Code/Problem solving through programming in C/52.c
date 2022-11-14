#include<stdio.h>

int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int num = n;
    int sum = 0;

    for (;n!=0;){
        sum = sum + (n%10);
        n = n/10;

    }
    printf("The sum of digits of the number %d is %d",num,sum);
    
    return 0;
}