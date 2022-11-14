#include<stdio.h>

int main(){
    int a[10]= {1,2,3,4,5,56,6,7,7,8} , i, sum=0,*p=a;
    for (i=0;i<10;i++) sum += p[i];
    printf("%d",sum);
    return 0;
}