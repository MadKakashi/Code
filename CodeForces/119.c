#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        int size,flag=0,num_0=0,num_1=0;
        scanf("%d",&size);
        int arr1[size];
        int arr2[size];
        for (int i = 0 ; i<size ; i++) scanf("%d",&arr1[i]);
        for (int i = 0 ; i<size ; i++) scanf("%d",&arr2[i]);

        for (int i = 0 ; i<size ; i++){
            if (arr1[i]!=arr2[i]){
                flag++;
                if (arr1[i]==1) num_1++;
                else num_0++;
            }
        }
        if (flag==0) printf("0\n");
        else if(flag==1) printf("1\n");
        else if (flag >=2 ){
            if (num_0==num_1) printf("1\n");
            else if(num_0!=num_1){
                int max = num_0>=num_1?num_0:num_1;
                int min = max==num_0?num_1:num_0;
                int ans = max - min + 1;
                printf("%d\n",ans);
            }
        }

        
    }
    return 0;
}