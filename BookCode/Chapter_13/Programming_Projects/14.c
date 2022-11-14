#include<stdio.h>
#include<string.h>
#include<stdbool.h>

void lexo (char str[]){

    int len = strlen(str);

    for (int i = 0 ; i<len ; i++){
        for (int j = i+1 ; j<len ; j++){
            if (str[i]>str[j]){
                int temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

bool are_anagram(char word1[] , char word2[]){
    int a= strcmp(word1,word2);
    if (a==0) return true;
    else return false;
}



int main(){
    char word1[] = "updesh";
    char word2[] = "pdeshu";
    lexo(word1);
    lexo(word2);
    printf("%d",are_anagram(word1,word2));

    return 0;
}