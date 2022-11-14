#include<stdio.h>

int main(){
    int i;
    int sum=0;
    int a[5];
    for (i=0;i<5;i++){
        scanf("%d",&a[i]);
        sum += a[i];
    }
    printf("%d",sum);
    return 0;
}