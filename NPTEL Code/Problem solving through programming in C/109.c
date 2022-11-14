//function which sums of square of two numbers 
#include<stdio.h>

int square(int n){
    return n*n;
}

int main(){
    int a,b;
    int sum_square;
    printf("Enter a and b:");
    scanf("%d %d",&a,&b);

    sum_square = square(a)+square(b);
    printf("%d",sum_square);


    return 0;
}