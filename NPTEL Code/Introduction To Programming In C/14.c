#include<stdio.h>

int main(){
    int a ,b,t;

    scanf("%d %d",&a,&b);
        if (b>a){
        t = b;
        b = a;
        a = t;
     }

    while(!(b==0)){
        t=a;
        a=b;
        b=t%b;
    }

    printf("%d\n",a);
    return 0;
}