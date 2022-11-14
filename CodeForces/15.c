#include<stdio.h>

int main(){
    char ch;
    int i = 0; 
    char array[200]={0};

    while((ch=getchar())!='\n'){
        array[i] = ch;
        i++;
    }

    for (int j = 0 ; j<i ; j++) {
        if (array[j]=='.'){
            printf("0");
        }
        if (array[j]=='-'&&array[j+1]=='.'){
            printf("1");
            j++;
        }
        if (array[j]=='-'&&array[j+1]=='-'){
            printf("2");
            j++;
        }
    }
    
    return 0;
}