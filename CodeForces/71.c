#include<stdio.h>
#include<string.h>

int main(){
    int i;
    scanf("%d",&i);

    for (int j = 0 ; j<i ; j++){
        char str[101] ;
        scanf("%s",str);
        if (strlen(str)<=10){
            printf("%s\n",str);
        }

        else{
            printf("%c%d%c\n",str[0],strlen(str)-2,str[strlen(str)-1]);
        }
        
    }
    return 0;
}