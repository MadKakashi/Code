//14 
//34
//16
//true
//false

#include<stdio.h>

int main(){
    int a[] = {5,15,34,54,14,2,52,72};
    int *p = &a[1];
    int *q =  &a[5];
    printf("%d %d",p,q);
   
    return 0;
}