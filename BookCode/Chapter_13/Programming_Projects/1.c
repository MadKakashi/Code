// #include<stdio.h>
// #include<string.h>

// void read_line(char str[]){
//     char* p = str;
//     char ch;
//     while((ch=getchar())!='\n'){
//         *(p++) = ch;
//     }
//     *p = '\0';
// }

// int main(){
//     char smallest_word[21] , largest_word[21];
//     char string[21];
//     int flag = 0;

//     for(;;){
//         printf("Enter word:");
//         read_line(string);

//         if(flag==0){
//             strcpy(smallest_word,string);
//             flag = 1;
//         }



//         if(strcmp(string,smallest_word)<0){
//             strcpy(smallest_word,string);
//         }
//         if(strcmp(string,largest_word)>0){
//             strcpy(largest_word,string);
//         }

//         if (strlen(string)==4) break;
        
//     } 

//     printf("Smallest word: %s\n",smallest_word);
//     printf("Largest_word: %s",largest_word);
//     return 0;
// }


