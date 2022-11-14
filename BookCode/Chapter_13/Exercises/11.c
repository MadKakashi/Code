#include<stdio.h>

int my_strcmp(char *s , char *t){
    int i ;

    for (i=0 ; *s==*t;i++){
        if (*s=='\0'){
            return 0;
        }
        s++;
        t++;
    }
    return *s-*t;
}

int main(){

    printf("%d",my_strcmp("bhiss","thiss"));
    
    return 0;
}

