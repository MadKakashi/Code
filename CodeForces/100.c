#include<stdio.h>
#include <string.h>

int main(){

    int n,count1=0,count2=0,flag=0;
    scanf("%d",&n);
    char str1[101]={0};
    char str2[101]={0};
    char str3[101] = {0};
    scanf("%s",str1);
    count1++;
    for (int i = 0 ; i<n-1 ; i++){
        scanf("%s",str2);
        if ((strcmp(str2,str1)==-1 || strcmp(str2,str1)==1) && flag==0){
            strcpy(str3,str2);
            flag=1;
        }
        if (strcmp(str2,str1)){
            count2++;
        }
        else {
            count1++;
        }
    }
    //printf("%d %d",count1,count2);
    //printf("\n%s %s ",str1,str3);
    count2>count1?printf("%s",str3):printf("%s",str1);
    return 0;
}