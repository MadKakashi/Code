#include<stdio.h>

int main(){
    char array[100] = {0};
    char array2[100] = {0};
    char ch;
    int i = 0,j=0,x;

    while ((ch=getchar())!='\n'){
        array[i] = ch;
        i++;
    }
    while ((ch=getchar())!='\n'){
        array2[j] = ch;
        j++;
    }
    for (x = 0 ; x<i ; x++){
        if (array[x]!=array2[i-1-x]){
            printf("NO");
            break;
        }
    }
    if (x==i){
        printf("YES");
    }
    return 0;
}