//A - Expression	
#include<stdio.h>

int main(){
    int a,b,c;
    int max = 0;
    scanf("%d %d %d",&a,&b,&c);
    if ((a+b+c)>max){
        max = a+b+c;
    }
    if (a+(b*c)>max){
        max = a+(b*c);
    }
    if ((a+b)*c>max){
            max = (a+b)*c;
    }
    if (a*b*c>max){
        max = a*b*c;
    }
    if ((a*b)+c>max){
        max = (a*b)+c;
    }
    if (a*(b+c)>max){
        max = (a*(b+c));
    }
    printf("%d",max);

    return 0;
}