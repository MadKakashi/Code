#include<stdio.h>

int sum_digits(int n ){
    static int sum = 0 ;
    while (n>0){
        sum += n%10;
        n /= 10;
    }
    printf("%d\n",sum);
}

int main(){
    int sum=100;
    sum_digits(101);
    printf("%d",sum);
    return 0;
}