#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    string str,prev;
    int flag = 0;

    while(cin>>str){
        if (!isupper(str[0])){
            continue;
        }
        if (prev== str){
            flag = 1;
            break;
        }
        prev = str;
    }

    if (flag==1) cout << str;
    else cout << "No repeat";

    return 0;
}