#include<stdio.h>


int main(){
    long long int num,drink,i;

    long double sum = 0;
    scanf("%lld",&num);

    for( i = 0 ; i<num ; i++){
        scanf("%lld",&drink);
        sum += drink;
    }
    
    printf("%Lf",((sum)/(num)));
    return 0;
}