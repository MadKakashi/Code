#include<stdio.h>

int main(){
    printf("This is good");
    //printf("%c",'\n'); works
    //printf("%c","\n"); does not work because the a character is required not a string
    //printf("%s",'\n'); //does not work because string is required an we have provided a character here
    //printf("%s","\n"); //works beacuse a string is required and we have passing a string into the functions
    //printf('\n'); does not work beacause the printf fucntion requires a pointer 
    //printf("\n"); works because a string literal is passed to the function
    //putchar('\t'); work because a string is required a character is passed
    //putchar("\n"); //does not work because a character is require but a string is passed
    //puts('\n'); does not work because a character is 
    //puts("\n"); 2 new line characters are written beacuse of the "\n" string and other one due to puts which puts a new line character after printing the string inside the argument
    //puts(""); works because as there is nothing in the string inside however the puts prints a new line character after executing the statement

    printf("ok");
    return 0;
}