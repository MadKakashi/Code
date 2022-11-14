#include<stdio.h>

int power(int a, int b){
    if (b!=0){
        return a * power(a,b-1);
    }
    else if (b==0){
        return 1;
    }
}

int main(){
     printf("%d",power(5,2));
    return 0;
}