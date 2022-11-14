#include<stdio.h>

#define NELEMS(a) ((int)(sizeof(a)/sizeof(a[0])))

int main(){
    char arry[4];
    printf("%d",NELEMS(arry));
    return 0;
}