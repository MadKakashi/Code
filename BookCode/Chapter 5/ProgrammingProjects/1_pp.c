#include<stdio.h>

int main(){
    int number;
    printf("Enter the number:");
    scanf("%d",&number);
    if(number<=9 && number>=1){
        printf("1");
    }
    if(number<=99 ){
    printf("2");
    }
    if(number<=999 ){
    printf("3");
    }
    if(number<=9999 ){
    printf("4");
    }
    return 0;
}
