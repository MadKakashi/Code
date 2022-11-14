#include<stdio.h>

int main(){
    int num,deno,a,b,rem;
    printf("Enter a fraction:");
    scanf("%d/%d",&num,&deno);

    a=num;
    b=deno;

    while (b!=0){
        rem=a%b;
        a=b;
        b=rem;


    }
    printf("%d/%d",num/a,deno/a);
    return 0;
}