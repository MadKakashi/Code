#include<stdio.h>

int main(){
    long long tests;
    scanf("%lld",&tests);

    while(tests--){
        long long n;
        scanf("%lld",&n);
        printf("%lld\n",(n/3)-2);
    }

    return 0;
}