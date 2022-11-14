#include<stdio.h>
#include <string.h>

int main(){
    char str1[101], str2[101] , str3[101];
    scanf("%s %s %s",str1,str2,str3);
    strcat(str1,str2);

    int counter[26] = {0};
    for (int i = 0 ; str1[i]; i++){
        counter[str1[i]-65]++;
    }

    int counter2[26] = {0};
    for (int i = 0 ; str3[i]; i++){
        counter2[str3[i]-65]++;
    }

    int i;
    for ( i = 0 ; i<26 ; i++){
        if (counter[i]!=counter2[i]){
            printf("NO");
            break;
        }
    }
    
    if (i==26){
        printf("YES");
    } 
    
    return 0;
}






