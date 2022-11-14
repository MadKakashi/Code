#include<stdio.h>

int main(){
    long long tests,a,b,max,c;
    long long zero = 0;
    long long one = 1;
    scanf("%lld ",&tests);

    for (long long i = 0 ; i<tests ; i++){
        max = 0;
        scanf("%lld%lld%lld",&a,&b,&c);
        if (a>max) max = a;
        if (b>max) max = b;
        if (c>max) max = c;

        if (a==b&&a==c&&max==a){
            printf("%lld %lld %lld\n",one,one,one);
        }
        else if (a==b&&max==a){
            printf("%lld %lld %lld\n",one,one,max-c+1);
        }
        else if (b==c&&max==b){
            printf("%lld %lld %lld\n",max-a+1,one,one);
        }
        else if (c==a&&max==c){
            printf("%lld %lld %lld\n",one,max-b+1,one);
        }
        else if (a==max)
        printf("%lld %lld %lld\n",zero,max-b+1,max-c+1);
        else if (b==max){
            printf("%lld %lld %lld\n",max-a+1,zero,max-c+1);
        }
        else {
            printf("%lld %lld %lld\n",max-a+1,max-b+1,zero);
        }
    }
    return 0;
}