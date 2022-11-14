#include<stdio.h>
 
int main(){
    char array[100],ch;
    int number[100]={0};
    int i = 0,temp ,v=0;
 
    while ((ch=getchar())!='\n'){
            array[i] = ch;
            i++;
    }
    
    
    for (int j = 0 ; j<i ; j+=2,v++){
        number[v] = array[j]-48;
        
    }
    
    for (int x = 0 ; x<v ; x++){
        for (int y = x+1 ; y<v ; y++){
                if (number[x]>number[y]){
                    temp = number[x];
                    number[x] = number[y];
                    number[y] = temp;
                }
        }
    }
    for (int m = 0 ; m<v ; m++){
        printf("%d",number[m]);
        if (m!=v-1){
            printf("+");
        }
    }
    
    return 0;
}