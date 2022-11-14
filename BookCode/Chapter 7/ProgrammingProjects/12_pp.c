#include<stdio.h>

int main(){
    float a,b,ans=0;
    char ch;
    printf("Enter an expression");
    scanf("%d%c%d",&a,&ch,&b);
    switch(ch){
        case '+' : ans = a+b; break;
    }
    while(1){
        scanf("%c%d",&ch,&a);
        if (ch=='\n')break;
        switch(ch){
            case '+' : ans+=a; break;
        }
    }
    printf("%f",ans);
    return 0;
}