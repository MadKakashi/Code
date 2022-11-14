#include<stdio.h>

int main(){
    char ch,cha;
    char array[10];
    int i = 0;
    printf("Enter a first and last name:");
    scanf("%c",&cha);
   
    while ((ch=getchar())!=' '){
            if (ch!=' '){
                continue;
            }
            break;
    }
    while ((ch=getchar())!='\n'){
        array[i] = ch;
        i++;
    }
    for (int j = 0 ;j<10 ; j++){
        printf("%c",array[j]);
    }
    printf(", %c",cha);
    

    return 0;
}
