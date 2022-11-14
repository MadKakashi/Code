#include <iostream>
#include "sales.h"

using namespace std;

int main()
{
    Sales_item item1, item2;

    if (cin >> item1){
        int count = 1;
        while(cin>>item2){
            if (item1.isbn()==item2.isbn()){
                count++;
            }
            else{
                cout << item1.isbn() << " " << count << endl; 
                count = 1;
                item1 = item2;
            }
        }
        cout << item1.isbn() << " " << count << endl;
    }
    return 0;
}