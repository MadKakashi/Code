//functions which sums all the digits of a number
#include<stdio.h>

int sum_of_digits(int n){
    int sum=0;
    for (;n!=0;){
        sum += n%10;
        n = n/10;
    }
    
    return (sum);
    
}

int main(){
    int num;
    scanf("%d",&num);
    printf("%d",sum_of_digits(num));
    return 0;
}