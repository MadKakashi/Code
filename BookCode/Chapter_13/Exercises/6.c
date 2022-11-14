#include<stdio.h>

void censor(char str[] , int n ){
    int i = 0;

    while (str[i]!='\0'){
        if ((str[i]=='f')&&(str[i+1]=='o')&&(str[i+2]=='o')){
            str[i] = 'x';
            str[i+1] = 'x';
            str[i+2]= 'x';
        }
        i++;
    }

}

void censor(char *str , int n ){
    int i = 0;

    while (*str!='\0'){
        if ((*str=='f')&&(*(str+1)=='o')&&(*(str+2)=='o')){
            *str = 'x';
            *(str+1) = 'x';
            *(str+2)= 'x';
        }
        str++;
    }

}

int main(){
    char str[] = "This is food of the foodle";
    censor(str,100);
    printf("%s",str);
    return 0;
}