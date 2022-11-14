#include<stdio.h>
#include<string.h>

#define TOUPPER(c) ('a'<=(c)&&(c)<='z'?(c)-'a'+'A':(c))

int main(){
        int i;
        char s[100];
        strcpy(s, "abcd");
        i = 0;
        putchar(TOUPPER(s[++i]));

    //B
    //0
    return 0;
}