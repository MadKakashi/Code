#include<stdio.h>

int main(){
    int a,b;
    int counter = 0 ;
    scanf("%d%d",&a,&b);
    if (a>b){
        printf("0");
    }
    else{
    do{
        a *= 3;
        b *= 2;
        counter++;
    }while (a<=b);
    }
    printf("%d",counter);
    return 0;
}