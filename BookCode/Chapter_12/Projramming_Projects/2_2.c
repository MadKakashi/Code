#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
    char array[50];
    char ch;
    int i = 0 ;
    int len = 0;
    int flag = 0;
    char *p=array;

    while ((ch=getchar())!='\n'){
        if ((ch>=65 && ch<=90)||(ch>=97 && ch<=122))
        {*(p++) = tolower(ch);}
        len++;
    }

    p -= 1;
    char *j = array;

    for ( ; len-- ;){
        if (*(j++)!=*(p--)){
            flag = 1;   
            break;
        }
    }

    if (flag==1) printf("Not a palindrome");
    else {
        printf("Palindrome");
    }

    return 0;
}