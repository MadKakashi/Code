// #include<stdio.h>

// int main(){
//     int matrix[5][5];
//     int sum = 0;

//     for (int i = 0 ; i<5 ; i++){
//         printf("Enter row %d ",i);
//         for (int j = 0 ; j<5 ; j++){
//             scanf("%d",&matrix[i][j]);
//         }
//         printf("\n");
//     }
//     printf("Row totals:");
//     for (int j = 0 ; j< 5 ; j++){
//         sum = 0;
//         for (int i = 0 ; i<5 ; i++){
//             sum+=matrix[j][i];
//         }
//         printf("%d ",sum);
//     }

//     printf("\nColumn totals:");
//     for (int j = 0 ; j< 5 ; j++){
//         sum = 0;
//         for (int i = 0 ; i<5 ; i++){
//             sum+=matrix[i][j];
//         }
//         printf("%d ",sum);
//     }
//     return 0;
// }


// #include<stdio.h>

// int main(){
//     int store[26] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
//     char word[20] = {0};
//     char ch;
//     int sum = 0;
    
//     while ((ch=getchar())!='\n'){
//         sum += store[ch-'a'];
//     }
//    printf("Scrabble value:%d",sum);
    
//     return 0;
// }

#include<stdio.h>

int main(){
    printf("%f",(float)5/2);
    return 0;
}