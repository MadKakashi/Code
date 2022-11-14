#include<stdio.h>
#include<string.h>

void build_index_url(char *domain , char *index_url){
    strcpy(index_url,"http://www.");
    strcat(index_url,domain);
    strcat(index_url,"/index.html");
}

int main(){

    char domain[100] = "knking.com";
    char index_url[100];
    build_index_url(domain,index_url);
    printf("%s",index_url);
    
    return 0;
}