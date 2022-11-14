//skip whitespace before beginning to store input character
//have it stop reading at the first white-space character

#include<stdio.h>

int read_line(char str[] , int n){
    char ch, i=0;
   // while ((ch=getchar())==' ');
    while ((ch=getchar())!='\n'){
        str[i++] = ch;
    }
    return i;
}

int main(){
    char str[100];
    int n = 100;
    printf("%d\n",read_line(str,n));
    printf("%c\n",str[14]);
    printf("%s",str);
    return 0;
}