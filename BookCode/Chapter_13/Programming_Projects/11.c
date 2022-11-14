#include<stdio.h>
#include<string.h>

double compute_average_word_length( char *sentence){
    char *p = sentence;
    double count=0;
    double len = (double)strlen(sentence);
    while(*p){
        if(*p==' '){
            printf("%.1f ",count);
            count++;
        }
        p++;
    }

    return (len-count)/(count+1);
}


int main(){
    char sentence[] = "It was deja vu all over again.";
    printf("\n%.1f",compute_average_word_length(sentence));
    return 0;
}