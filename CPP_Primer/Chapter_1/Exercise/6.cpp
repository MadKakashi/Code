#include<iostream>
#include"sales.h"

using namespace std;

int main(){
    Sales_item total; //varaible to hold data for the next transaction
    if (cin >> total){
        Sales_item trans; //variable to hold the running sum
        while (cin >> trans){
            if (total.isbn() == trans.isbn()){
                total += trans;
            }
            else {
                cout << total << endl;
                total = trans;
            }
        }
        cout << total << endl;
    }
    else cout << "No data" << endl;

    return 0;
}