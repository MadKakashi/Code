#include<stdio.h>

void store_zeros(int a[],int n){
    int *p = a;

    for (;p<&a[n];p++){
        *p = 0;
    }
}

int main(){
    
    return 0;
}