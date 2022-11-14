#include<stdio.h>

int main(){
    long long cost,dollars,bananas;
    scanf("%lld %lld %lld",&cost,&dollars,&bananas);

    long long total_cost = ((bananas)*((2*cost)+(bananas-1)*cost))/2;
    long long borrow = total_cost - dollars;

    if(borrow<0){
        borrow=0;
    }
    printf("%lld",borrow);

    
    return 0;
}