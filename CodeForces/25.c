#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
    char array[100]={0};
    int array2[26]={0};
    char ch;

    int num,i=0;
    scanf("%d ",&num);

    while ((ch=getchar())!='\n'){
        ch = toupper(ch);
        array[i] =  ch ;
        i++;
    }

    for (int j = 0 ; j<i ; j++){
        ch = array[j];
        ch = ch - 'A';
        array2[ch]++;
    }

    for (int z = 0 ; z<26 ; z++){
        if (array2[z]==0){
            printf("NO");
            exit(0);
        }
    }
    printf("YES");
    return 0;
}