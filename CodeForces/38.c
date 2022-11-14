#include<stdio.h>

int main(){
    int num,anton = 0, danik=0;
    scanf("%d ",&num);
    char arr[num];

    for (int i = 0 ; i<num ;i++){
        scanf("%c",&arr[i]);
        if (arr[i]=='A'){
                anton++;
        }
        else{
            danik++;
        }
    }

    if (anton>danik){
        printf("Anton");
    }
    else if(danik>anton){
            printf("Danik");
    }
    else {
        printf("Friendship");
    }

    return 0;
}