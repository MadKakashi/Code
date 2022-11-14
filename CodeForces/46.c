#include<stdio.h>

int main(){
    int tests,num,a,odd,even;
    scanf("%d",&tests);

    for (int i = 0 ;i<tests;i++){
        odd = 0;
        even = 0;
        scanf("%d",&num);

        for (int j = 0 ; j<(2*num) ; j++){
            scanf("%d",&a);
            if (a%2==0)odd++;
            else even++;
        }
            if (odd==even){
            printf("YES\n");
        }
            else {
            printf("NO\n");
        }
    }
    return 0;
}