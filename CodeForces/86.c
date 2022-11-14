#include<stdio.h>
#include<stdlib.h>

int main(){
    long long test_cases;
    scanf("%lld",&test_cases);

    for (long long i = 0 ; i<test_cases ; i++){
        long long a,b,c;
        scanf("%lld%lld%lld",&a,&b,&c);

        long long first,second,both;

        first = abs(a-1);
        second = abs(c-b) + abs (c-1);

        if (first>second){
            printf("2\n");
        }
        else if (first<second){
            printf("1\n");
        }
        else {
            printf("3\n");
        }
    }
    return 0;
}