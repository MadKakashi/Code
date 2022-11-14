//pp 14
#include<stdio.h>

int main(){
    char array[20]={0};
    int counter=0;
    char ch;
    int i = 0 ,d,a;
    
    while ((ch=getchar())!='\n'){
        array[i]=ch  ;
        i++;
    }
    
    for (a = i ; a>=0 ; a--){
        if ((array[a]!=' ')&&(a!=0)){
            counter++;
        }          
        
        else {
            if(a==0){
                a=-1;
                counter++;
            }
           
            for ( d = a+1 ; counter>0;counter--,d++){
                printf("%c",array[d]);
            }
            printf(" ");
        }       
    }
    return 0;
}