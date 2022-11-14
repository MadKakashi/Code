// #include<stdio.h>
// #include<string.h>

// int main(int argc , char const *argv[]){
//     printf("%c",argv[1]);
//     return 0;
// }

#include<stdio.h>

int main(){
    char str[] = "Desi";
    char gfg[10][10];

    strcpy(gfg[0],str);

    printf("%s",gfg[0]);
    return 0;
}































// #include<stdio.h>
// #include<string.h>

// int main(int argc , char const *argv[]){
//     printf("The value of argc is %d\n",argc);  

//     for (int i = 0 ; i<argc ; i++){
//         printf("This argument at index number %d has value of %s\n",i,argv[i]);
//     }  
//     return 0;
// }