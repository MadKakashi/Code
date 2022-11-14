#include<stdio.h>

int main(){
    char s[] = "Hsjodi" , *p;

    for (p=s;*p;p++){
        --(*p);
    }
    puts(s);
    return 0;
}

//Grinch