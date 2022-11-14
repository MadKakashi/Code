#include<stdio.h>

int main(){
    long long num;
    long long sum1=0,sum2=0,sum3=0;
    scanf("%d",&num);
    
    long long first,sec,third;
    long long first1,sec1,third1;
    scanf("%lld%lld%lld",&first,&sec,&third);
    sum1 = first;
    sum2 = sec ;
    sum3 = third ;

    while (num>1){
        scanf("%lld%lld%lld",&first1,&sec1,&third1);
        sum1 += first1;
        sum2 +=  sec1;
        sum3 +=  third1;
        
        num--;

    }
     if (sum1==0 && sum2==0 && sum3==0){
        printf("YES");
    }
    else {
        printf("NO");
    }

    return 0;
}