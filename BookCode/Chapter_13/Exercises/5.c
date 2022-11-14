#include<stdio.h>
#include<ctype.h>

// void capitalize(char str[] , int n){
//     char ch;
//     int i = 0 ;
//     while (((ch=getchar())!='\n') && (i<n)){
//         str[i++] = toupper(ch);
//     }
//     str[i] = '\0';
// }

// void capitalize(char *str , int n){
//     char ch;
//     int i = 0 ;
//     char *s = str;
//     while (((ch=getchar())!='\n') && (i<n)){
//         *s = toupper(ch);
//         s++;
//     }
//     *s = '\0';
// }

void capitalize(char *str , int n){
    char ch;
    int i = 0 ;
    
    while (((ch=getchar())!='\n') && (i<n)){
        *str = toupper(ch);
        str++;
    }
    *str = '\0';
}

int main(){
    char str[100];
    int n = 100;

    capitalize(str,n);
    printf("%s",str);
    return 0;
}