#include<stdio.h>

int main(){
    int i ;
    scanf("%d",&i);

    char *array[] = {"Ten","Eleven","Twelve","Thireteen",
                    "Fourteen","Fifteen","Sixteen","Seventeen",
                    "Eighteen","Nineteen"};

    char *ones[] ={"one","two","three","four","five","six","seven","eight","nine"};
    char *tens[] = {"twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninty"};

    
    if (i>=10 && i<=19){
        int digit = i%10;

        printf("%s",*array+digit);
    }

    else{
        int tens1 = i/10;
        if (tens1!=0){
        printf("%s",tens[tens1-2]);}


        int ones1 = i%10;
        printf("%s",ones[ones1-1]);

        
    }

    



    return 0;
}