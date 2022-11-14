#include<stdio.h>

void encrypt (char *message , int shift){
    char *p = message;

    while(*p){
        if (*p>=65 && *p<=90){
            *p = ((*p-'A')+shift)%26 + 'A';
        }

        if (*p>=97 && *p<=122){
            *p = ((*p-'a')+shift)%26 + 'a';
        } 
        p++;
    }
}

int main(){
    char str[] = "Go ahead, make my day";
    int shift = 3;
    encrypt(str,shift);
    printf("%s",str);
    return 0;
}