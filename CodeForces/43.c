#include<stdio.h>

int main(){
    int first,second,third,fourth,j=0;
    int one=0,two=0,three=0,four=0;
    char string[10];
    long long sum = 0;
    char ch;

    scanf("%d%d%d%d ",&first,&second,&third,&fourth);
    while((ch=getchar())!='\n'){
        string[j] = ch-48;
        if (string[j]==1){
            one++;
        }
        else if (string[j]==2){
            two++;
        }
        else if (string[j]==3){
            three++;
        }
        else{
            four++;
        }

        j++;        
    }
    
   sum = (first)*(one)+(second)*(two)+(third)*(three)+(fourth)*(four);
    printf("%lld",sum);
    
    return 0;
}