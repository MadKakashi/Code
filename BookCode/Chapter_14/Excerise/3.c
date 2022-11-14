#include<stdio.h>
#define DOUBLE(x) 2*x

int main(){
    printf("%d %d",DOUBLE(1+2),4/DOUBLE(2));

    // 2*1+2 = 4
    // 4/2*2 = 4
    //FIXED DOUBLE ((2)*x)
    return 0;
}