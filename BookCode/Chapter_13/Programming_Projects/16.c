#include<stdio.h>
#include<string.h>

void reverse(char *str){
    int i = strlen(str);
    char *p = str; //pointingu to the first element
    char *q = str+i-1;

    while (p!=q){
        char temp = *p;
        *p = *q;
        *q = temp;
        p++;
        q--;  
        if (p>q){ break;}
    }
}

int main(){
    char str[] = "zgzrdfae";
    reverse(str);
    printf("%s",str);
    return 0;
}