#include<stdio.h>

int main(){
    int cubes,sum=0,i,number;
    scanf("%d",&cubes);

    for (i=1 ; cubes>=sum ; i++){
            number = ((i)*(i+1))/2;
            sum += number;

    }
    printf("%d",i-2);
    return 0;
}