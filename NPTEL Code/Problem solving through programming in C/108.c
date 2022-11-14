//writing a function which checks whether the number inputted is divisible by 7 or not
#include<stdio.h>

void div7(int n){
    if (n%7==0){
        printf("Divisible by 7");
    }
    else {
        printf("Not divisible by 7");
    }
    
}

int main(){
    int num;
    scanf("%d",&num);
    div7(num);
    
    return 0;
}