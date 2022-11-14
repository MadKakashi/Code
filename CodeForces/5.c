//A - HQ9+
#include<stdio.h>
#include <stdlib.h>

int main(){
    char ch;
    while((ch=getchar())!='\n'){
        if ((ch=='H')||(ch=='Q')||(ch=='9')){
            printf("YES");
            exit(0);
            
        }
       
    }
    printf("NO");
    return 0;
}