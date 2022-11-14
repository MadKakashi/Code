#include<stdio.h>
#include <string.h>
#include<ctype.h>
 
int main(){
    char str[110]={0};
    char ans[110]={0};
    char ch;
    int i = 0 ;
 
    while((ch=getchar())!='\n'){
       if (ch=='A' ||ch=='E' ||ch=='I' ||ch=='O' ||ch=='U'||ch=='a' ||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u'||ch=='y'||ch=='Y');
       else {
        str[i] = ch;
        i++;
       }
    }

    char *q = str;
    while(*q){
        strcat(ans,".");
        strncat(ans,(q),1);
        q++;
    }
 
    char *r = ans;
    while(*r){
        if (*r!='.'){
            *r = tolower(*r);
        }
        r++;
    }
 
 
    printf("%s",ans);
    return 0;
}