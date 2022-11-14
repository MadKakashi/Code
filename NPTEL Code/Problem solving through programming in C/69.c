#include<stdio.h>

int main(){
    int i = 2;
    int j = i=(3);
    printf("%d\n",j);
    printf("%d",i);
    return 0;
}