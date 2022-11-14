#include<stdio.h>
#include<ctype.h>

int main(){
    char array[100]={0};
    char ch;
    int i = 0,uppercase=0,lowercase=0 ;
    int j= 0;

    while ((ch=getchar())!='\n'){
        array[i]=ch;
        if (ch>='A' && ch<='Z'){
            uppercase++;
        }
        else {
            lowercase++;
        }
        i++;
    }
   

    if (uppercase>lowercase){
        
        while (i>j){

        printf("%c",toupper(array[j]));
         j++;
     }
     }
    else {
        while(i>j){
            printf("%c",tolower(array[j]));
            j++;
        }
    }
    
    return 0;
}