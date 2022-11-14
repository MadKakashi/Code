#include<stdio.h>
#include<math.h>
 
int main(){
    long long a,b,c;
    scanf("%lld %lld %lld",&a,&b,&c);
 
    long long prod = (long long)sqrt(a*b*c);
    long long ans = (4)*((prod/a)+(prod/b)+(prod/c));
    printf("%lld",ans);
 
    return 0;
}