#include<stdio.h>

int main(){
    int test_cases,num_of_col;
    scanf("%d",&test_cases);

    for (int i = 0 ; i<test_cases ; i++){
        scanf("%d",&num_of_col);

        char str[2][num_of_col];

        char *p = &str[0][0];

        for (;p<&str[1][num_of_col];p++){
            scanf("%c",p);
            if (*p=='\n'){
                p--;
                continue;
            }
            
        }
        
        p = &str[0][0];
        char *q = &str[1][0];
        int j;
        for( j = 0 ; j<num_of_col ; j++){
            if (*p==*q || (*p+*q==137));

            else {
                printf("NO\n");
                break;
            }
            p++;
            q++;
        }

        if (j==num_of_col){
            printf("YES\n");
        }

    }
    return 0;
}

