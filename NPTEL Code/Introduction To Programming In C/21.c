#include<stdio.h>

int main(){
    int a,b,t;
    scanf("%d %d",&a,&b);

    if (a<b){
        t = a;
        a = b;
        b = t;
    }  
    int g;
    printf("The gcd of %d and %d is ",a,b);

    while (b!=0){
        g = a%b;
        a = b;
        b = g;
        }
    printf("%d",a);  
    return 0;
}