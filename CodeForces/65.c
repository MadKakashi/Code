#include<stdio.h>

int main(){
    int n;
    int num;
    int sum = 0;
    
    scanf("%d",&n);

    for (;n>=1;n--){

        int array[10] = {0};
        int number;
        scanf("%d",&number);
        for (int i = 1 ; i<=n ; i++){
            for (;i!=0;){
                int x = i%10;
                i/=10;
                array[i]++;
            }
        }

        for (int j = 0 ; j<=9 ; j++){
            if (array[j]<2){
                continue;
            }
            else {
                sum++;
            }
        }

        
        

        
    }
    return 0;
}