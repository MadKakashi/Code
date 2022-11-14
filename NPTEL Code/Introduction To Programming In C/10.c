#include<stdio.h>

int main(){
    int M,N;
    scanf("%d %d",&M,&N);
    if ((M%N)==1){
        printf("1");
    }
    else {
        printf("0");
    }
    return 0;
}