// #include<stdio.h>
// #include<string.h>

// int main(){
//     char str[1001] = {0};
//     scanf("%s",str);

//     int counth=0, counte=0, countl1=0 ,countl2=0, counto=0;
    
//     int i = 0 ;
//     while(str[i]){
//        if(str[i]=='h'){
//         counth == i;
//         break;
//        }
//        i++;
//     }

//     while(str[i]){
//         if(str[i]=='e'){
//             counte = i;
//             break;
//         }i++;
//     }

//     while(str[i]){
//         if(str[i]=='l'){
//             countl1 = i;
//             break;
//         }i++;
//     }
//     i++;

//      while(str[i]){
//         if(str[i]=='l'){
//             countl2 = i;
//             break;
//         }i++;
//     }

//     while(str[i]){
//         if(str[i]=='o'){
//             counto = i;
//             break;
//         }i++;
//     }
//     //printf("%d %d %d %d %d",counth,counte,countl1,countl2,counto);
//     if(counth<counte && counte<countl1 && countl1<countl2 && countl2<counto){
//         printf("YES");
//     }
//     else {
//         printf("NO");
//     }
    
//     return 0;
// }

#include<stdio.h>

int main(){
    char str[200];
    char hello[] = "hello";
    scanf("%s",str);

    char *p = str;
    int count = 0 , i = 0 , j = 0;
    while(*p){
        if (str[i]==hello[j]){
            count++;
            j++;
        }
        p++;
        i++;
    }
    if (count==5)printf("YES");
    else printf("NO");
    return 0;
}