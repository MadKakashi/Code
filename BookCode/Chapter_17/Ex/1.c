#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *concat(char *s1 , char *s2){
    char *result;

    result = malloc(strlen(s1)+strlen(s2)+1);

    if (result==NULL){
        printf("Error");
        exit(EXIT_FAILURE);
    }

    strcpy(result,s1);
    strcat(result,s1);
    return result;
}

int main(){
    
    return 0;
}