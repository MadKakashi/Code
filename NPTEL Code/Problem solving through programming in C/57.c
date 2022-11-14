#include<stdio.h>

void main(){
    int a;
    scanf("%d",&a);

    for (;a!=0;){
        printf("%d",a%10);
        a = a/10;
    }
    // return 0;
}