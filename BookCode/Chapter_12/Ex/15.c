#include<stdio.h>

int main(){

    int temperatures[7][24];
    int i ;
    int *p = temperatures[i];
    while (p<temperatures[i+1]){
        printf("%d",*(p++));
    }
    return 0;
}