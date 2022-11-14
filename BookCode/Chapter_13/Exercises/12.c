#include<stdio.h>
#include<string.h>

void get_extension(const char *file_name, char *extension){
    int point;
    const char *p = file_name;
    while(*p){
        if (*p=='.'){
            break;
        }
        p++;
    }
    strcpy(extension,p+1);
    
}

int main(int argc , char *argv[]){
    
    printf("%s\n",argv[0]); //contains the file name
    char extension[4];
    get_extension(argv[0],extension);
    printf("%s",extension);

    return 0;
}