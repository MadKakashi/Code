#include<stdio.h>

int main(){
    int sum,i,num,N;
    int N =5;
    int sum = 0;
    for (i=1;i<=N;i++){
        printf("Please enter an integer\n");
        scanf("%d",&num);
        sum = sum + num ; 
    }
    return 0;
}