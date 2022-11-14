#include<stdio.h>

int main(){
    int sum=0,count=0;
    int N = 5;
    int num;

    while (count<N){
        printf("Please enter a number\n");
        scanf("%d",&num);
        sum = sum + num;
        count++;
    }
    printf("%d",sum);
    return 0;
}