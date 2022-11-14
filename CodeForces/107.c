#include<stdio.h>

int main(){
    long long y,k,n;
    scanf("%lld %lld %lld",&y,&k,&n);

    if (y>=n){
        printf("-1");
        return 0;
    }
    int x = y;
    x += k - (y%k);
    int flag = 0;

    while(n>=x){
        printf("%lld ",x-y);
        x+=k;
        flag = 1;
    }
    if (flag == 0 ) printf("-1");
    return 0;
}