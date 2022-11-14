#include<stdio.h>

int main(){
    char num1[100];
    char num2[100];
    char ch;
    int i = 0 , j = 0;

    while ((ch=getchar())!='\n'){
        num1[i] = ch-48;
        i++;
    }

    while ((ch=getchar())!='\n'){
        num2[j] = ch-48;
        j++;
    }

    for (int a = 0 ; a<j ; a++){
        if (num1[a]!=num2[a]){
            printf("1");
        }
        else {
            printf("0");
        }
    }

   
    return 0;
}