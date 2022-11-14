#include<stdio.h>
#include<string.h>

struct part{
    int number;
    char *name;
    int on_hand;
};

struct part build_part(int number , char *name , int on_hand){
    struct part p;

    p.number = number;
    p.name = "what";
    p.on_hand = on_hand;
    return p;
}

int main(){
    struct part part1;
    part1  = build_part(528 , "rr", 10);
    printf("%s",part1.name);

    return 0;
}