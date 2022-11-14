//program which evalutes the of nCr
#include<stdio.h>

int ncr(int n , int r){
    return ((fact(n))/((fact(r))*(fact(n-r))));
}

int fact(int n){
    int i;
    int temp = 1;
    for (i=1;i<=n;i++){
        temp *= i;
    }
    return temp;
}

int main(){
    int a = 5,b=2;
    printf("%d",ncr(a,b));   
    
    return 0;
}