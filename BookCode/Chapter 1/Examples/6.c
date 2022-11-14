//pp 15
#include<stdio.h>

int main(){
    char ch;
    char array[30]={0};
    int i = 0;
    int shift;
    printf("Enter message to be encrypted:");
    while ((ch=getchar())!='\n'){
        array[i]=ch  ;
        
        i++;
    }
    printf("Enter shift amount:");
    scanf("%d",&shift);

    for (int j = 0 ;j<i ; j++){
        ch = array[j];
        
        if (ch>=65 && ch<=90)
        {ch = ((ch-'A')+shift)%26+'A';
        array[j] = ch;
        }
        if (ch>=97 && ch<=122){
            ch = ((ch-'a')+shift)%26+'a';
            array[j] = ch;

        }
    }
    for (int a = 0 ; a<=i ; a++){
        printf("%c",array[a]);
    }
    return 0;
}

