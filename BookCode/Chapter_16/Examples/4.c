#include<stdio.h>

struct part{
    int number;
    char name[20];
    int on_hand;
};

void print_part(struct part p1){
    printf("Part number = %d\n",p1.number);
    printf("Part name: %s\n",p1.name);
    printf("Quantity on hand : %d\n",p1.on_hand);
}



int main(){
    struct part p2 = {23 , "vehicak" , 11};
    print_part(p2);
    return 0;
}