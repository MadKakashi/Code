#include<iostream>

using namespace std;

int main(){
    // int a = 5;
    // int* p = &a;
    
    // cout <<p <<" "<< *p<< endl;
    // int b = 6;
    // p = &b;
    // cout << p <<" "<< *p;

    int *p;
    if (p)printf("YEs");
    return 0;
}

//pointer can point to different kinds of objects
//reference can only point to one object

//pointer can be left unintialized
//reference cannt be left uninitialized

//i = (42)*(42);

//a->illegal ; poitner to double points to integer variable
//b->illegal ; pointer to integer is given a value of integer(0)
//c->legal

//the condition willl be true if it is a valid pointer and not a null pointer
//the condition will be true if the value of the object at which the pointer p points to non-zero

//No we cannot

//bcz we are poiting a integer varaible to a pointer which points to only long type variables

//a-> ip is a pointer to int ; i - integer ; r is a reference variable to a int
    //[ud,ud,same as i]
//b->int ; pointer to int
    //[id,null]
//c->pointer to int ; int
    // [ud,ud]


//a->illegal not initialized
//b-> legal
//c-> legal
//d->++sz is illegal ; can't change the value of const variable










