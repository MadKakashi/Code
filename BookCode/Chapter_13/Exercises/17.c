#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
bool test_extension(const char *file_name,const char *extension){


    if(strcmp(file_name,extension)!=0){
        return false;
    }
    else {
        return true;
    }


}

int main(int argc , char *argv[]){
    char extension[] = "tGxt";

    char *p = extension;
    while(*p){
        *p = tolower(*p);
        p++;
    }
    printf("%s",extension);
    char str[100] = "memo.txt";
    char *p = str;

    while (*p!='.') {
        p++;
        }
    p++;

    strcpy(str,p);
 
    printf(" %d",test_extension(str,extension));
    return 0;
}