#include<iostream>

using namespace std;

int global = 12;

int main(){
    int resued = 0;
    cout << resued << " " << global << endl;
    int global = 90;
    cout << resued << " " << global;
    return 0;
}