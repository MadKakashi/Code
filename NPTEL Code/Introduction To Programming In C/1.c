//calculate 1+2+3+...n

#include<stdio.h>

int main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    int sum=0;
    int i=1;
    for(;i<=n;i++){
        sum = sum + i;

    }
    printf("%d",sum);
    return 0;
}