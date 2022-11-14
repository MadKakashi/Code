#include<stdio.h>

int main(){
    char ch;
    char array[100]={0};
    int i = 0;
    int sum=0;
    int array2[26] = {0};

    while ((ch=getchar())!='\n'){
        array[i] = ch;
        i++;
    }
  
    for (int j = 0 ; j<i ; j++){
        ch = array[j];
        ch = ch-'a';
        array2[ch]=1;
    }

    for (int a = 0 ; a<26 ; a++){
        sum += array2[a];
    }  

    if (sum%2==0){
        printf("CHAT WITH HER!");
    }
    else {
        printf("IGNORE HIM!");
    }

    return 0;
}