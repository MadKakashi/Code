#include<iostream>

using namespace std;

int main(){
   // int *ip1 , *ip2; //ip1 and ip2 are pointers to int
   // double dp , *dp; //dp2 is a pointer to double and dp is a double

   // int ival = 42;
   // int *p = &ival; //p holds the adddress of ival; p is pointer to ival

    //double dval;
    //double *pd = &dval; //intializer is a address of double
    //double *pd2 = pd; //intializer is a pointer to doulbe
    //int *pi = pd; // pd is a pointer to a double and pi is a pointer to a interger
    //pi = &dval; //pii is a pointer to int and the initializer is address of double
    
    // int ival = 42;
    // int *p = &ival;
    // cout << *p << endl;

    // *p = 69;
    // cout << ival << endl;
    
    int i = 42;
    int &r = i; //r is bound to i
    int *p = &i; // declared a pointer to an integer // p points to int i
    //*p = i; //

    int &r2 = *p; //r2 binds to 
    cout << r2 << endl;
    return 0;
}