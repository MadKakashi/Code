#include<stdio.h>

int main(){
    int i=4;
    int x,z=2;
    x = i++ + z;
    printf("%d %d %d",x,i,z);

    return 0;
}