#include<stdio.h>
#include<string.h>

void reverse_name (char *name){
    char *p = name;

    while(*p==' '){p++;}
    
    char string[2] ={*p,'\0'};
    p++;

    while(*p!=' '){p++;}
    while(*p==' '){p++;}

    char string2[20];
    char *q =string2;
    while(*p!=' '){
        *q = *p;
        p++;
        q++;
    }
    strcat(string2,", ");
    strcat(string2,string);
    strcat(string2,".");

    strcpy(name,string2);
    printf("%s",name);
}

int main(){
    char name[] = "Lloyd Fosdick     ";
    reverse_name(name);

    return 0;
}