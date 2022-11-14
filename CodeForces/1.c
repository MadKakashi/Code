//A - Elephant
#include<stdio.h>

int main(){
    long num;
    long counter=0;
    scanf("%ld",&num);
    if (num<=5){
        printf("1");
    }
    else {
        for (;num>=5;counter++){
            num -= 5;
        }
        if (num!=0){
        counter++;}
        printf("%ld",counter);
    }
    return 0;
}