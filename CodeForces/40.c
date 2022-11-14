#include<stdio.h>

int main(){
    int n;
    char arr[6];
    int j = 0,z;
    char ch;
    scanf("%d",&n);

    for (int i = 0 ; i<n ; i++){

        ch = getchar();

            for (z = 0 ; z<6 ; z++){
            
            scanf("%c",&arr[z]);
            
            if (z==5){
                break;
            }
            }
            if (arr[0]+arr[1]+arr[2]==arr[3]+arr[4]+arr[5]){
            printf("YES\n");
            }

            else{
            printf("NO\n");
            }      
    }
    return 0;
}