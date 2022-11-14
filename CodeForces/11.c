#include<stdio.h>
#include <stdlib.h>

int main(){
    long long num,i,counter=0;
    scanf("%lld",&num);

    for (; num>0 ; num = num/10){
        i = num%10;
        if ((i==4)||(i==7)){
            counter++;
        }
    }
    

    if (counter == 0 ){
        printf("NO");
        exit(0);
    }
    for (;counter>0;counter/=10){
        if ((counter%10)!=4 && (counter%10)!=7){
            printf("NO");
            exit(0);
        }
    }
    printf("YES");
    return 0;
}