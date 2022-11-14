#include<stdio.h>

int main(){
    int sum =0,N;

    scanf("%d",&N);

    for(int i=1;i<=N;i++){
        sum = sum + i*i;
    }
    printf("%d",sum);
    return 0;
}