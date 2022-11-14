#include<iostream>

using namespace std;

int main(){
    int i  = 10;
    //int &j = 10;
    //this statement is wrong because we are initializing a reference to a value 
    // but it must be initialized to a object (variable)
    double dval = 2.3;
    //no error
    // int &refVal15 = dval;
    //wrong as we are initialzing a integer reference to a double variable which is wrong

    
    
    return 0;
}