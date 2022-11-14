#include<stdio.h>

int evaluate_position(char board[8][8]){
    char *p = &board[0][0];

    char *a = &board[8][8];
    
    int black=0,white=0;

    while ((p++)<=(a)){
        switch(*p){
            case 'Q' : white += 9; break;
            case 'R' : white += 5;break;
            case 'B' : white += 3;break;
            case 'P' : white += 1;break;
            case 'N' : white += 3;break;
            case 'q' : black += 9;break;
            case 'r' : black += 5;break;
            case 'b' : black += 3;break;
            case 'p' : black += 1;break;
            case 'n' : black += 3;break;
        }
    }

    return (white);
}

int main(){
    char chessboard[8][8]= {{'K','Q','R','B','N','P'},
                           {'k','q','r','b','n','p'} };
    printf("%d",evaluate_position(chessboard));
    return 0;
}