#include<stdio.h>

int main(){
    int rows = 3;
    int columns = 5;
    int r=1;

    while (r<=rows){
        int c = 1;
        while (c<=columns){
            printf("*");
            c++;
        }
        printf("\n");
        r++;
    }
    return 0;
}