#include<stdio.h>

int main(){
    char arr[50] = {0};
    char ch;
    int i = 0,counter= 0,aa ;

    scanf("%d ",&aa);

    while ((ch=getchar())!='\n'){
        arr[i]= ch;
        i++;
    }

    for (int j = 0 ; j<i-1 ; j++){
        if (arr[j]==arr[j+1]){
            counter++;
        }
    }
    printf("%d",counter);
    return 0;
}