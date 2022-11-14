#include<stdio.h>

int main(){
    long long stops,exits,entered,max = 0 ;
    long long counter = 0;
    scanf("%lld",&stops);

    for ( ;stops>0 ;stops--){
        scanf("%lld%lld",&exits,&entered);
        counter -= exits;
        counter += entered;
        if (max<counter){
            max  = counter;
        }
    }
    printf("%lld",max);
    return 0;
}