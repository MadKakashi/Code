#include<stdio.h>

int main(){
    int n;
    printf("Enter an integer:");
    scanf("%d",&n);
    do{
        printf("%d",n%10);
        n /= 10;

    } while (n!=0);
    
    return 0;
}