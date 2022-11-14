#include<stdio.h>
#include<string.h>

void number_of_words(char str[],int *words){
    char *spaces = str;
    while(*spaces){
        if (*spaces==' '){
            (*words)++;      
        }
        spaces++;
    }
    (*words)++;
}

int main(){
    char str[] = "you dothe be the greatest ";
    int words = 0; //contains the number of words in string
    number_of_words(str,&words);
       
    char array[5][10]={0};
    
    char *p = str;
    char *q;
    
    for (int i = 0; i<words;i++){
        int count=0;

        while(*p!=' ' && p<=str+strlen(str)-1){
             p++;
             count++;
        }
        
        char *q = p - count;

        strncpy(&array[i][0],q,count);
        //strcat(&array[i][0],"\0");

        p+=1;
 
    }

    char *v = array[0];
    for (int i = 0 ; i<5 ; i++){
        for (int j = 0 ; j<10 ; j++){
            printf("%c",*(v++));
        }
        printf("\n");
    }
   

    return 0;
}