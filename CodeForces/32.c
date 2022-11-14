#include<stdio.h>

int main(){
    long long n,k;
    scanf("%lld%lld",&n,&k);

    for (;k>0;k--){
        if ((n%10)!=0){
            n -= 1;
        }
        else {
            n /= 10;
        }
    }
    printf("%lld",n);
    return 0;
}