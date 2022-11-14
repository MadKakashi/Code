//pp16

#include<stdio.h>

int main(){
    char array1[26];
    int array2[26] = {0};
    int array3[26] = {0};
    char ch;
    int i = 0;
    int a,b;

    printf("Enter first word:");
    while ((ch=getchar())!='\n'){
        array1[i] = ch;
        i++;
    }
   
    for (int j =0 ; j<i ; j++){
        ch = array1[j];
        ch = ch - 'a';
        array2[ch]++;
    }
    
    i = 0;

    printf("Enter second word:");

    while ((ch=getchar())!='\n'){
        array1[i] = ch;
        i++;
    }

    for (int j =0 ; j<i ; j++){
        ch = array1[j];
        ch = ch - 'a';
        array3[ch]++;
    }

    for (int a = 0 ;a<26 ; a++){
        array3[a]= array2[a]-array3[a];

    }

    for (b = 0  ; b<26 ; b++){
        if (array3[b]!=0){
            printf("Not anagrams");
            break;
        }

    }
    if (b==26){
        printf("Anagrams");
    }
    


   
    return 0;
}