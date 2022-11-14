#include<stdio.h>
 
int right(int a, int b, int c ,int d){
    if (c>a&&b==d){
        return 1;
    }
    return 0;
}
int left(int a, int b, int c ,int d){
    if (c<a&&b==d){
        return 1;
    }
    return 0;
}
 
int up(int a, int b, int c ,int d){
    if (c==a&&b<d){
        return 1;
    }
    return 0;
}
 
int down(int a, int b, int c ,int d){
    if (c==a&&b>d){
        return 1;
    }
    return 0;
}
 
 
 
int main(){
    int n;
    scanf("%d",&n);
 
    int array[n][2];
 
    for (int i = 0 ; i<n ; i++){
        for (int j = 0 ; j<2 ; j++){
            scanf("%d",&array[i][j]);
        }
    }
    int points = 0;
    for (int i = 0 ; i<n ; i++){
        int count_r=0,count_l=0,count_u=0,count_d=0;
        for (int j = 0 ; j<n ; j++){
            if (i==j) continue;
            if (right(array[i][0],array[i][1],array[j][0],array[j][1])){
                count_r++;
            }
            if (left(array[i][0],array[i][1],array[j][0],array[j][1])){
                count_l++;
            }
            if (up(array[i][0],array[i][1],array[j][0],array[j][1])){
                count_u++;
            }
            if (down(array[i][0],array[i][1],array[j][0],array[j][1])){
                count_d++;
            }
        }
        if (count_u>=1 && count_r>=1 && count_l>=1 && count_d>=1){
            points++;
        }
    }
    printf("%d",points);
 
    return 0;
}