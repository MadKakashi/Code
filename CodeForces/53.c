#include<stdio.h>

int main(){
    int rows,i,j,breaker=0;
    scanf("%d",&rows);
    getchar();

    char array[rows][5];
    for (int i = 0 ; i<rows ; i++){
        for (int j = 0 ; j<5 ; j++){
            scanf("%c",&array[i][j]);
        }
        getchar();
    }

   for ( i = 0 ; i<rows ; i++ ){
       for ( j = 0 ; j<4 ; j++){
           if ((array[i][j]==array[i][j+1]&&array[i][j]=='O')&&array[i][j+1]=='O'){
               
               array[i][j] = '+';
               array [i][j+1] = '+';
               printf("YES\n");
               breaker = 1;
               break;
           }
       }
       if (breaker==1){
           break;
       }
   }

   if (array[i][j] == '+'){
       for (int i = 0 ; i<rows ; i++){
        for (int j = 0 ; j<5 ; j++){
            printf("%c",array[i][j]);
        }
        printf("\n");
         }
  }
  else {
      printf("NO");
  }
   

    return 0;
}

