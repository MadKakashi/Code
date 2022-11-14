#include<stdio.h>

int main(){
    long long num,i,a,counter=0;
    long long sum=0;

    scanf("%lld",&num);

    for (i=0 ; i<num ; i++){
        scanf("%lld",&a);

       sum += a;

       if(sum<0){
        counter++;
        sum=0;
       }

        
    }

    printf("%lld",counter);
    
    return 0;
}