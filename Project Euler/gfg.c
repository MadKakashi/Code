#include<stdio.h>
#include<stdlib.h>

int row,col;

void right(int *p,int length){
    for (int i = 0 ; i<length;i++){
        if (*p=='.'){exit(0);}
        printf("%d ",*p );
        *p = '.';
        p++;
    }
}

void left(int *p,int length){
    for (int i = 0 ; i<length;i++){
        if (*p=='.'){exit(0);}
        printf("%d ",*p );
        *p = '.';
        p--;
    }
}

void up(int *p,int width){
    for (int i = 0 ; i<width;i++){
        if (*p=='.'){exit(0);}
        printf("%d ",*p );
        *p = '.';
        p -= col;
    }
}
void down(int *p,int width){
    for (int i = 0 ; i<width;i++){
        if (*p=='.'){exit(0);}
        printf("%d ",*p );
        *p = '.';
        p += col;
    }
}

int main(){
    printf("Enter the number of rows:");
    scanf("%d",&row);
    printf("Enter the number of column:");
    scanf("%d",&col);

    int arr[row][col];
    for (int i = 0 ; i<row ; i++){
        for (int j = 0 ; j<col ; j++){
            scanf("%d",&arr[i][j]);
        }
        getchar();
    }
    
    int width = row;
    int length = col;
    int *p = arr[0];

    while(1){
        right(p,length); 
        length--; width--;
        p += length;
        p += col;

        down(p,width); 
        p += (width-1)*(col);
        p--;

        left(p,length);
         length--; width--;
        p -= length;
        p-=col;

        up(p,width);
        p -= (width-1)*col;
        p++;

        if (length == -1 && width == -1){
            exit(0);
        }
    }  
    return 0;
}