//even and odds
#include<stdio.h>

int main(){
    long long num;
    long long position;
    scanf("%lld %lld",&num,&position);

    if ((num%2)==0){
        if (num/2>=position){
            printf("%lld",1+(position-1)*2);
        }
        else {
            position -=num/2;
            printf("%lld",2+(position-1)*2);
        }
    }
    else{
        if (((num/2)+1) >= (position)){
            printf("%lld",1+(position-1)*2);
        }
        else {
            position -= ((num/2)+1);
            
            printf("%lld",2+(position-1)*2);
            
        }
    }
    return 0;
}
    
