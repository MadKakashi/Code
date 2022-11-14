#include<stdio.h>
#include<string.h>

void duplicate (char *p){
    
    char *q;

    strcpy(q,p);
    printf("%s",q);

    
}


int main(){

    char str[100] = "This is good";
    duplicate(str);
    
    return 0;
}