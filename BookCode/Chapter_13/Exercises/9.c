#include<stdio.h>

int main(){
    char s1[100],s2[100];
    strcpy(s1,"computer");
    strcpy(s2,"science");

    if (stcmp(s1,s2)<0){
        strcat(s1,s2);
    }

    else {
        strcat(s2,s1);
    }
    //computerscience
    s1[strlen(s1)-6] = '\0';
    return 0;
}