#include<stdio.h>

int main(){
    int fact=1;
    int i;
    for(int i = 1;i<=10;i++){
        fact = fact*i;
    }
    printf("%d",fact);
    return 0;
}