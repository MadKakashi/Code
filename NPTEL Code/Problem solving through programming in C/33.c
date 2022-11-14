#include<stdio.h>
#include<ctype.h>

int main(){
    char mychar;
    char mychar1;
    mychar = 'A';
    mychar1 = tolower(mychar);
    printf("%c",mychar1);
    return 0;
}