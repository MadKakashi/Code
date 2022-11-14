#include<stdio.h>

int main(){
    int i,j;
    char s[100];
    scanf("%d%s%d",&i,s,&j); 
    printf("%d %s %d",i,s,j);
    //12abc34 56def78
    //i->12 s->abc34 j->56

    return 0;
}