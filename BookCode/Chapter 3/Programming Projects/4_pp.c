#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter the phone number[(xxx) xxx-xxxx]:");
    scanf("(%d) %d-%d",&a,&b,&c);
    printf("%.3d.%.3d.%.4d",a,b,c);
    return 0;
}