#include<stdio.h>

int main(){
    int test_cases,num_of_letters;
    scanf("%d",&test_cases);

    for (int i = 0 ; i<test_cases ; i++){
        scanf("%d",&num_of_letters);

        char str[num_of_letters+1];
        scanf("%s",str);

        if (num_of_letters!=5){
            printf("NO\n");
        }
        else {
            
            int count[5] = {0};          
            str[5] = '\0';
            char *p = str;

            while (*p){
                switch(*p){
                    case 'T' : count[0]++; break;
                    case 'i' : count[1]++; break;
                    case 'm' : count[2]++; break;
                    case 'u' : count[3]++; break;
                    case 'r' : count[4]++; break;
                    }
                    p++;
            }

            int j = 0;
            for (; j<5 ; j++){
                //printf("%d ",count[i]);
                if (count[j]!=1){
                    printf("NO\n");
                    break;
                }
            }

            if (j==5){
                printf("YES\n");
            }         
        }
    }
    return 0;
}


