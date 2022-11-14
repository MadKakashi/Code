#include<stdio.h>

double inner_product (const double *a,const double *b,int n){
    double sum = 0;
    while(n-->0){
        sum += *(a++) * *(b++);
    } 
    return sum;
}

int main(){
    double a[3] = {3,5,3};
    double b[3] = {1,2,3};
    double *p = a;
    double *q = b;
    printf("\n%.0f",inner_product(p,q,3));

    return 0;
}