#include<stdio.h>

int main(){
    int num,i=0;
    scanf("%d",&num);

    char str[1001] = {0};
    int alphabets[26]={0};

    scanf("%s",str);

    while (str[i]){
        alphabets[str[i]-97]++;
        i++;
    }

    for (int i  = 0 ; i<26 ; i++){
        if (alphabets[i]%num!=0){
            printf("-1");
            return 0;
        }
    }

    char ans[1001] = {0};
    int j = 0;

    for (int i = 0 ; i<26 ; i++){
        int prints = alphabets[i]/num;
        while (prints--){
            ans[j] = (char) i + 97;
            j++;
        }
    }

    while(num--){
        printf("%s",ans);
    }
    return 0;
}

