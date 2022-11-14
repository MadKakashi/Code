#include<stdio.h>

int main(){
    int m,n,r;

    printf("Enter two integer:");
    scanf("%d %d",&m,&n);

    while (n != 0){
        r = m%n;
        m=n;
        n=r;
    }
    printf("GCD:%d",m);

    return 0;
}