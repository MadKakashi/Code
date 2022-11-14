#include<stdio.h>

int main(){
    char line[81],ch;
    int c = 0; 

    do {ch=getchar();
        line[c] = ch;
        c++;
    }
    while (ch!='\n');
    c = c - 1;
    line[c] = '\0';

    printf("%s",line);
    return 0;
}