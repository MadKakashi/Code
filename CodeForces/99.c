#include <stdio.h>
#include <stdlib.h>


int main()
{
    int time,s_x,s_y,e_x,e_y;
    scanf("%d%d%d%d%d",&time,&s_x,&s_y,&e_x,&e_y);

    char str[time];
    int count = 0;
    scanf("%s",str); 

    for (int i = 0 ; i<time ; i++){
        if (str[i]=='N' && abs(s_y-e_y)>abs(s_y+1-e_y)){
            s_y++;
            count++;
        }
        else if (str[i]=='S' && abs(s_y-e_y)>abs(s_y-1-e_y)){
            s_y--;
            count++;
        }
        else if (str[i]=='E'&& abs(s_x-e_x)>abs(s_x+1-e_x)){
            s_x++;
            count++;
        }
        else if (str[i]=='W'&& abs(s_x-e_x)>abs(s_x-1-e_x)){
            s_x--;
            count++;
        }

        else {
            count++;
        }
        if (s_x==e_x && s_y==e_y){
            break;
        }
    } 
    if (count<=time && s_x==e_x && s_y==e_y) printf("%d",count);
    else printf("-1"); 

    return 0; 
}
