#include<stdio.h>

int main(){
    long long a,b,c,d;
    long long max = 0 ; 
    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);

    if (a>max){
        max = a;
    }
    if (b>max){
        max = b;
    }
    if (c>max){
        max = c;
    }
    if (d>max){
        max = d;
    }

    if (max==a){
    printf("%lld %lld %lld",max-d,max-b,max-c);
    }
    else if (max==b){
    printf("%lld %lld %lld",max-d,max-a,max-c);
    }
    else if (max==c){
    printf("%lld %lld %lld",max-d,max-b,max-a);
    }
    else{
    printf("%lld %lld %lld",max-a,max-b,max-c);
    }

    return 0;
}