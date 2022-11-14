#include<stdio.h>

int main(){
    int n;
    int a,b,c;
    scanf("%d",&n);
    if (n==3){
        scanf("%d %d %d",&a,&b,&c);
        if ((a==b)||(a==c)||(b==c))
        printf("It is an isoceles\n");
        else {
        printf("Not isocelse\n");
        }
    }
    else printf("Not a triangle");

    return 0;
}