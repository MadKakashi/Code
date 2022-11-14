#include<stdio.h>

int main(){
    int a = 8;
    int b = 1;
    int sum = 0;
    while(b<=10){
        sum += a*b;
        b++;
    }
    printf("%d",sum);
    return 0;
}