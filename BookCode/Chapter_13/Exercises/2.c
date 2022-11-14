#include<stdio.h>

int main(){
    char *p = "abc";
    //putchar(p); illegal because putchar expects a character type into the argument and here we have provided a char pointer
    //putchar(*(p)); //legal because we have provided the first element of the string in the argument which is a character
    //puts(p);//legal because we have provided it the ponter to the first element of the string which is 'a'  and the output is abc and then a new line character
    //puts(*p); illegal becuase puts expects a char *and receives a char
 
    return 0;
}