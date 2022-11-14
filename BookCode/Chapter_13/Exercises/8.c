#include<stdio.h>

int main(){
    char str[100];

    strcpy(str,"tire-bouchon"); //tired-or-wired
    strcpy(&str[4],"d-or-wi"); //
    strcat(str,"red?");
    return 0;
}