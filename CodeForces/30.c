#include<stdio.h>
#include<ctype.h>

int main(){
    char ch;
    int i = 0 ;

    while ((ch=getchar())!='\n'){
        if (i == 0){
            ch = toupper(ch);
            printf("%c",ch);
            i++;
        }
        else {
            printf("%c",ch);
            }
    }
    return 0;
}