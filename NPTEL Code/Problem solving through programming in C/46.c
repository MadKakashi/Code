#include<stdio.h>

int main(){
    int fact,i;

    fact =1;
    i = 1;

    while(i<10){
        fact = fact * i;
        if (fact>100){
            printf("Factorial of %d is above 100",i);
            break;
        }
        i++;
    }
    return 0;
}