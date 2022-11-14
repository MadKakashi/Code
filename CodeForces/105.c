#include<stdio.h>

int main(){
    char arr[4][4];

    for (int i = 0 ; i<4 ; i++){
        for (int j = 0 ; j<4 ; j++){
            scanf("%c",&arr[i][j]);
        }
        getchar();
    }
    char *p = arr[0];
    while(p!=&arr[2][3]){
        int black=0,white=0;
        if (*p=='#') black++;
        else white++;

        if (*(p+1)=='#') black++;
        else white++;

        if (*(p+4)=='#') black++;
        else white++;

        if (*(p+5)=='#') black++;
        else white++;

        if (black>=3) {
            printf("YES"); return 0;
        }
        else if (white>=3){
            printf("YES"); return 0;
        }

        p++;

        if (p==&arr[0][3] || p==&arr[1][3]) p++;
    
    }

    printf("NO");
    return 0;
}