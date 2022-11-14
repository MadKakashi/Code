#include<stdio.h>

int main(){
    unsigned int n,sum=0;
    printf("This program sums a series of integers:\n");
    printf("Enter the integers (0 to terminate):");

    scanf("%u",&n);
    while(n!=0){
        sum += n;
        scanf("%u",&n);
    }
    printf("%u",sum);
    return 0;
}