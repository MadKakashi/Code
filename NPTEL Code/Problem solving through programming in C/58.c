// #include<stdio.h>
// #include <stdlib.h>
// int main(){
//     char ch;
//     printf("Enter a character:");
//     scanf("%c",&ch);
//     //97 101 105 111 117
//     //
//     if (((ch>=0)&&(ch<65))||((ch>=91)&&(ch<=96))||((ch>=123)&&(ch<=127))){
//         printf("Chutiya hai kya");
//         exit (0);
//     }

//     else if((ch==97)||(ch==101)||(ch==105)||(ch==111)||(ch==117)||(ch==65)||(ch==69)||(ch==73)||(ch==79)||(ch==85)){
//         printf("Vowel");
//     }
//     else{printf("not vowel");}
    
    
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     char ch;
//     scanf("%c",&ch);

//     if ((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')||(ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U')){
//         printf("Vowel");
//     }
//     else {
//         printf("Not vowel");
//     }
//     return 0;
// }

// #include<stdio.h>
// #include<ctype.h>
// int main(){
//      char ch,ar;
//     scanf("%c",&ch);

//     ch = tolower(ch);

//     if ((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')){
//          printf("Vowel");
//      }
//     else {
//         printf("Not vowel");
//     }
    
//     return 0;
// }

#include<stdio.h>

int main(){
    char ch;
    ch = 'a';
    printf("%d",ch);
    return 0;
}