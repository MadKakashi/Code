// #include<stdio.h>
// #include<string.h>

// int main(){
//     char str[200];
//     gets(str);
//     char ans[200];
//     char *p = str;
//     while(*p!=' '){p++;}
//     p++;
//     strcpy(ans,p);
//     strcat(ans,", ");
//     strncat(ans,str,1);
//     strcat(ans,".");
//     printf("%s",ans);
//     return 0;
// }
#include <stdio.h>

int main(void)
{

    printf("Enter the name:");
    char ch,initial;
    scanf("%c",&initial);

    while((ch=getchar())!=' ');
    while((ch=getchar())==' ');

    do{
        putchar(ch);
    } while((ch=getchar())!=('\n') && ch!=' ');
    printf(",%c.",initial);
    return 0;
}