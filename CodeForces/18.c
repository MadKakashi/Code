#include<stdio.h>
#include<ctype.h>

int main(){
    char array1[100]={0};
    char ch;
    char array2[100]={0};
    int i = 0, j = 0 ;
    int a;

    while ((ch=getchar())!='\n'){
        ch = toupper(ch);
        array1[i] = ch;
        i++;
    }

    while ((ch=getchar())!='\n'){
        ch = toupper(ch);
        array2[j] = ch;
        j++;
    }
    
    for ( a = 0 ; a<i ; a++){
        if (array1[a]==array2[a]){
            continue;
        }
        if (array1[a]<array2[a]){
            printf("-1"); break;
        }
        if (array1[a]>array2[a]){
            printf("1"); break;
        }

        
    }
    
    if (a==i){
        printf("0");
    }
    
    return 0;
}