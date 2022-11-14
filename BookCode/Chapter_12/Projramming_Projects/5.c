#include<stdio.h>

int main(){
    char sentence[50];
    char ch;
    char *p = sentence;

    while ((ch=getchar())!='\n'){
        *(p) = ch;
        p++;
    }

    p--;

    char *start = p;
    char *left;
    char *right = p;

    for (;start>=sentence;start--){
        if (*start==' '){
            left = start+1;
            right = start -1;
        }
        else {
            continue;
        }

        for (;left<=right;left++){
            printf("%c",*left);
        }
    }

    
    return 0;
}

