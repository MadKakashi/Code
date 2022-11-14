#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    if((a%6==0)){
        if (a&4==0){
        printf("%d is divisible by 6 and 4\n",a);
    }}
    
    return 0;
}