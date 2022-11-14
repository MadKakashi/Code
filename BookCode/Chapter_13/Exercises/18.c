#include<stdio.h>

void remove_filename(char *url){
    char *slash;
    while(*url){
        if(*url=='/'){
            slash = url;
        }
        url++;
    }
    *slash = '\0';
    
    
}

int main(){
    char url[] = "http://knking.com/index.html";
    remove_filename(url);

    printf("%s",url);

    return 0;
}