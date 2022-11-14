#include<stdio.h>

int main(){
    char array[50];
    char ch;
    char *p = &array[0];
    int i = 0 ;

    while ((ch=getchar())!='\n'){
        *p=ch;
        p++;
        i++;
        
        }


    //printf("%d %c\n\n",i-1,array[i-1]);
    i -= 1;
    for (;i>=0;i--){
        printf("%c",array[i]);
    }
    
    return 0;
}

