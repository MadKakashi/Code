#include<stdio.h>

int main(){
    //97-122 = a-z
    char ch;
    printf("enter the character\n");
    scanf("%c",&ch);
    if(ch<=122 && ch>97){
        printf("It is a lowercase");
    }
    else{
        printf("It is not lowercase");
    }
    return 0;
}