#include <iostream>
using namespace std;
int main()
{
    
    int current_value, count = 1,value;

    if (cin >> current_value){

        while (cin>>value){
            if (current_value==value){
                count++;
            }
            else {
                cout << current_value << " occurs " << count << " times" << endl;
                count = 1;
                current_value = value;
            }
        }

        cout << current_value << " occurs " << count << " times" << endl;


    }
    return 0;
}