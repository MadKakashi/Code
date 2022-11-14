#include<stdio.h>

int main(){
    int a;
    int sum =0;
    printf("Enter a number:");
    scanf("%d",&a);

    for(int i=a;i>=1;i--){
        sum =sum+i;
    }
    printf("%d",sum/a);
    return 0;
}