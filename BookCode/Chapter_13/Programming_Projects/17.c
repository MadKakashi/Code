#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include <ctype.h>

void my_tolower(char *message){
    char *p = message;
    while(*p){
        *p = tolower(*p);
        p++;
    }
}


bool is_palindrome(char *message){
    
    my_tolower(message); 
    int len = strlen(message);

    char *p = message;
    char *q = message + len - 1;

    while(p<q){
        while(!(*p>=97 && *p<=122)){
            p++;
        }
        while(!(*q>=97 && *q<=122)){
            q--;
        }
        if (*p!=*q){
            return false;
        }
        p++;
        q--;
    }
    return true;
     
}

int main(){
    char message[] = "ma,,},,,da,,,,m?";
    printf("%d",is_palindrome(message));
    
    return 0;
}