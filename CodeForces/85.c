#include<stdio.h>

int main(){
    long long n;
    scanf("%lld",&n);

    while (n){
        if (n%10==1){
            n/=10;
        }
        else if (n%100==14){
            n/=100;
        }
        else if (n%1000==144){
            n/=1000;
        }
        else {
            break;
        }

    }
    if (n)printf("NO");
    else printf("YES");
    return 0;
}