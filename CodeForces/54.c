#include<stdio.h>

int main(){
    long long num,j,sum=0;
    scanf("%lld",&num);
    getchar();
    char array[12] = {0};
    char ch;

    for (long long i = 0 ; i<num ; i++){
        j=0;
        while ((ch=getchar())!='\n'){
            array[j] = ch;
            j++;
        }
        
        if (array[0]=='T'){
            sum += 4;
        }
        else if (array[0]=='C'){
            sum += 6;
        }
        else if (array[0]=='O'){
            sum += 8;
        }
        else if (array[0]=='D'){
            sum += 12;
        }
        else {
            sum += 20;
        }
    }
    printf("%lld",sum);
    return 0;
}