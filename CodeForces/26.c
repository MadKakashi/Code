#include<stdio.h>

int main(){
    long long num,candles,i,a,b;
    scanf("%lld",&num);

    for (i = 0 ; i<num ; i++){
        scanf("%lld",&candles);
        if (candles<3){
            printf("0\n");
        }
        else {
            if (candles%2==0)
                printf("%lld\n",(candles/2)-1);
            else{
                printf("%lld\n",(candles/2));
            }
        }
    }
    return 0;
}