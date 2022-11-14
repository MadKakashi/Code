#include<iostream>

using namespace std;

int main(){
    int a , b;
    cout << "Enter two numbers:";
    cin >> a >> b;

    if (b<a){
        int temp = a;
        a = b;
        b = temp;
    }
    while (b>=a){
        cout << a << endl;
        a++;
    }
    return 0;
}