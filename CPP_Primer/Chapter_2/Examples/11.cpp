#include<iostream>

using namespace std;

int main(){
    int i = 42;
    int *p; //p is pointer to int
    p = &i;
    int *&r = p; //r is a reference to the pointer p
    
    *r = 0;
   
    return 0;
}