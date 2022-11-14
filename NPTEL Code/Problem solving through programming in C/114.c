#include <stdio.h>
#include <string.h>

int main()
{
    int i = 0,row=0,col=0;
    char str[100] = {0};
    gets(str);

    char str2[100][100] = {0};

    while (str[i])
    {   col = 0;
        while(str[i]!='\0' && str[i]!=' '){
            str2[row][col] = str[i];
            col++;
            i++;
        }
        str2[row][col] = '\0';
        row++;
        if (str[i]!='\0'){
            i++;
        }
    }
    int len = row;
    int max_index=0 , min_index=0;
    int max = strlen(&str2[0][0]);
    int min = strlen(&str2[0][0]);

    for (int i = 0 ; i<len ; i++){
        int a = strlen(str2[i]);
        if (a>max){
            max = a;
            max_index = i;
            
        }
        if (a<min){
            min = a;
            min_index = i;
        }
    }
   // printf("%d %d",max_index,min_index);
    printf("%s %s",str2[max_index],str2[min_index]);



    return 0;
}
