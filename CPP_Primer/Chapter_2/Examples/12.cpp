#include<iostream>

using namespace std;

int main(){
    const double gravity = 9.8;
    const int buffSize = 512; //constatn buffer variable
   
    int i = 42;
    const int ci = i;
    int j = ci;

    cout << i << " " << ci << " " << j ;

    return 0;
}