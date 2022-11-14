//theatre
#include<stdio.h>

int main(){
    long long n,m,a;
    scanf("%lld %lld %lld",&n,&m,&a);
    long long na = n/a;
    if (n%a==0){
        na = na;
    }
    else {
        na += 1;
    }

    long long ma = m/a;
    if (m%a==0){
        ma = ma;
    }
    else {
        ma = ma+1;
    }
    printf("%lld",ma*na);
    return 0;
}