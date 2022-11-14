#include<iostream>

using namespace std;

int main(){
    int i = 1024 , *p = &i , &r = i;
    //i is an int
    //p is a pointer to int
    //r is referece which binds to i

    int *p2;
    int *p1; 

    //pointer to a pointer
    int ival  = 1024;
    int *pi = &ival;
    int **ppi = &pi;

    cout << ival << " " << *pi << " " << **ppi;

    return 0;
}