#include<stdio.h>

int main(){
    int i,j;
    scanf("%d",&i);

    for (j=0;i>0;j++){
        i = i/10;
    }
    printf("%d",j);
    return 0;
}