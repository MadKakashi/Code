#include<stdio.h>

int main(){
    int a[10]= {1,2,3,4,5,6,7,8,9,10};
    int *p = &a[2];
    printf("%d\n",*p);
    printf("%d\n",a[4]);
    p = p + 2;
    printf("%d",*p);
    return 0;
}