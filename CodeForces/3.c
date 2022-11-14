//A - Beautiful Year
#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    a = a+1;
    for (;;a++){
        if(((a%10)!=((a/10)%10))&&((a%10)!=(((a/100)%10)))&&((a%10)!=((a/1000)))){
            if ((((a/10)%10)!=((a/100)%10))&&((((a/10)%10))!=((a/1000)))&&(((a/100)%10))!=(a/1000)){
                printf("%d",a);
                break;
            }
        }
           
        }
    
    return 0;
}
// (a%10)-unit 
// ((a/10)%10) - tens
// ((a/100)%10) - hundereds
// (a/1000) - thousands