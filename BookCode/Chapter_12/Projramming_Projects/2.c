#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
    char array[50];
    char ch;
    int i = 0 ;
    int flag = 0;

    while ((ch=getchar())!='\n'){
        if ((ch>=65 && ch<=90)||(ch>=97 && ch<=122))
        {array[i++] = tolower(ch);}
    }
     i -= 1;

    for (int j = 0 ; i>j ; j++,i--){
        if (array[j]!=array[i]){
            flag = 1;   
            break;
        }
    }

    if (flag==1) printf("Not a palindrome");
    else {
        printf("Palindrome");
    }

    return 0;
}