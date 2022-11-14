#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int random_number;

void generate_random_walk(char random_walk[10][10]);
void print_array(char random_walk[10][10]);
int main(){
    char random_walk[10][10];
    
    srand(time(0));

    generate_random_walk(random_walk);
    print_array(random_walk);


    return 0;
}
void generate_random_walk(char random_walk[10][10]){
    for (int i = 0 ; i<10 ; i++){
        for (int j = 0 ; j<10 ; j++){
        random_walk[i][j] = '.';
        }
    }
    int m=0,n=0;
    random_walk[m][n] = 'A';

    for (int x = 0 ; x<25 ; x++ ){
        random_number = rand()%4;
        
        
        if (random_number==0 && random_walk[m][n+1]=='.'){
            if (m>=0 && m<=9 && (n+1) >=0 && (n+1)<=9)
            random_walk[m][++n]= 'A' + x + 1;
            else {x--;
                continue;}
        }
        else if (random_number==1 && random_walk[m-1][n]=='.'){
            if (m-1>=0 && m-1<=9 && (n) >=0 && (n)<=9)
            random_walk[--m][n] = 'A' + x + 1;
            else {x--;
                continue;}
        }
        else if (random_number == 2 && random_walk[m][n-1]=='.'){

            if (m>=0 && m<=9 && (n-1) >=0 && (n-1)<=9)
            random_walk[m][--n] = 'A' + x + 1;
            else {x--;
                continue;}
        }
        else if (random_number==3 && random_walk[m+1][n]=='.'){
            if (m+1>=0 && m+1<=9 && (n)>=0 && (n)<=9)
            random_walk[++m][n] = 'A' + x + 1;
            else {x--;
                continue;}
            
        }
        else if (random_walk[m+1][n]!='.' && random_walk[m-1][n]!='.' &&random_walk[m][n+1]!='.' &&random_walk[m][n-1]!='.'){
            break;
        }
        else {
            x--; 
            continue;
        }
    }
}

void print_array(char random_walk[10][10]){
    for (int i = 0 ; i<10 ; i++){
        for (int j = 0 ; j<10 ; j++){
            printf("%c ",random_walk[i][j]);
        }
        printf("\n");
    }
}