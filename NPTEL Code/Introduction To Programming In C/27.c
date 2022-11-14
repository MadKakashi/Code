#include<stdio.h>

int main(){
    int a = 1;
    float sum;
    for (sum = 0;a!=101;a++){
        sum = sum + (1.0/a);
    }
    printf("%f",sum);
    return 0;
}