#include<stdio.h>

int main(){
    int a[10],i,j;
    int sum = 0;

    for (i=0;i<10;i++){
        scanf("%d",&a[i]);
    }

    for (j=0;j<10;j++){
        sum = (sum + a[j]);
    }
    printf("%d",sum);
    return 0;
}