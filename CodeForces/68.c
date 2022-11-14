#include<stdio.h>

int main(){
    int num,seconds;
    scanf("%d %d",&num,&seconds);
    getchar();
    char str[num];
    scanf("%s",str);

    while(seconds){
        char *p = str;
        for(;p<str+num-1;p++){
            if ((*p=='B') && (*(p+1)=='G')){
                *p = 'G';
                *(p+1)= 'B';
                p++;

            }
        }
        seconds--;
    }

    printf("%s",str);
    
    return 0;
}