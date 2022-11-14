// #include <stdio.h>
// #include<string.h>

// int main()
// {
//     char str[201] = {0};
//     char string[201] = {0};
//     gets(str);

//     char *p = str;

//     while (*p)
//     {
//         while (*p == 'W' && *(p + 1) == 'U' && *(p + 2) == 'B' && (*p != '\0' && *(p + 1) != '\0' && *(p + 2) != '\0'))
//         {
//             p += 3;
//         }

//         if (*p==0) break;
//         while (1)
//         {
//             if (*p == 'W' && *(p + 1) == 'U' && *(p + 2) == 'B' && (*p != '\0' && *(p + 1) != '\0' && *(p + 2) != '\0'))
//             {
//                 break;
//             }
//             else {
//                 strncat(string,p,1);
//             }
//             p++;
//             if (*p==0) break;
//         }
//         strcat(string," ");
//     }
//         for (int i = 0 ; i<200 ; i++){
//             printf("%c",string[i]);
//             if (string[i+2]=='\0') break;
//         }
//         return 0;
//     }

