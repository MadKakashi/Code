#include<stdio.h>

int main(){
    char str1[201];
    char str2[201];
    int small[26]={0};
    int capital[26]={0};
    gets(str1);
    gets(str2);

    char *p = str1;
    while(*p){
        if (*p>='A' && *p<='Z'){
            capital[(*p-'A')]++;
        }
        else if(*p>='a' && *p<='z'){
            small[(*p-'a')]++;
        }
        p++;
    }

    char *q = str2;
    while(*q){
        if (*q>='a' && *q<='z'){
            small[(*q-'a')]--;
            if (small[(*q-'a')]<0){
                printf("NO");
                return 0;
            }
        }
        if (*q>='A' && *q<='Z'){
            capital[(*q-'A')]--;
            if (capital[(*q-'A')]<0){
                printf("NO");
                return 0;
            }
        }
        q++;
    }
    
    printf("YES");

    return 0;
}