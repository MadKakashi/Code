#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    string current, prev,highest_str;
    int repeat_times = 0,high_repeat=0;

    while(cin >> current ) {
        if (current==prev){
            repeat_times++;
        }
        else {
            prev = current;
            repeat_times = 1;
        }

        if (repeat_times>high_repeat){
            highest_str = current;
            high_repeat = repeat_times;
        }

    }
    cout << highest_str << " ocurred " << high_repeat << " times.";
    return 0;
}