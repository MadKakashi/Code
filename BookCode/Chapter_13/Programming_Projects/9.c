#include<stdio.h>

int compute_vowel_count(char *sentence){
    char *vowel = "AEIOUaeiou";
    int count = 0;
    char *p = sentence;

    while(*p){
        for (char *v= vowel ; *v ; v++ ){
            if (*v == *p){
                count++;
            }
        }
        p++;
    }
    return count;
}

int main(){
    char *sentence = "And that's the way it is";
    
    printf("%d",compute_vowel_count(sentence));
    
    return 0;
}