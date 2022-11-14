#include<stdio.h>
#include<string.h>

int main(){
    char str1[100001];
    char str2[100001];
    scanf("%s",str1);
    scanf("%s",str2);

    if (strlen(str1)!=strlen(str2)){
        printf("NO");
        return 0;
    }

    char *p = str1;
    char *q = str2;
    char first_p,first_q;
    char second_p,second_q;
    int value = 1;
    while(*p){
        if (*p!=*q){
            if(value==1){
                first_p = *p;
                first_q = *q;
                value++;
            }
            else if (value==2){
                second_p = *p;
                second_q = *q;
                value++;
            }
            else {
                printf("NO");
                return 0;
            }
        }

        p++;
        q++;
    }
    
    if (first_p==second_q && second_p==first_q){
        printf("YES");
    }
    else {
        printf("NO");
    }

   
    
    return 0;
}