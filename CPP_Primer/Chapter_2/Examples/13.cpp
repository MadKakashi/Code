#include<iostream>

using namespace std;


int main(){
    // ** -> pointer to a pointer
    // *** -> pointer to a pointer to a pointer
    int ival = 1024;
    int *pi = &ival; //pi points to an inte
    int **ppi = &pi; //ppi points to a pointer to an int

    //dereferencing a pointer -> int
    //dereferencing a pointer to a pointer -> pointer to an int

    cout << "The value of ival\n"
        << "direct value : " << ival << endl;
    cout << "indirect value : " << *pi << endl;
    cout << "doubly indirect value: " << **ppi;
    return 0;
}