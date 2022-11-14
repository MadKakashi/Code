// #include<iostream>
// #include<string>
// #include<vector>

// using namespace std;

// int main(){
//     string s;
//     vector<string> str;
//     while(cin >> s){
//         str.push_back(s);
//     }

//     for (auto &s : str){
//         for (auto &a : s){
//             a = toupper(a);
//         }
//     }

//     for (auto a : str){
//         cout << a << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <vector>

// using namespace std;

// int main()
// {
//     // illegal beacuse the size of the vector is zero
//     vector<int> ivec(1,42);
//     for(auto a : ivec){
//         cout << a << endl;
//     }
//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <vector>

// using namespace std;

// int main()
// {
//     // vector<int>a(10,42);

//     // vector<int>a(10);
//     // int len = 10;
//     // while(len--){
//     //     a.push_back(42);
//     // }

//     vector<int>a{42,42,42,42,42,42,42,42,42,42};
//     for (auto a : a)
//     {
//         cout << a << endl;
//     }
//     return 0;
// }

#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    vector<int>list;
    int a;

    while(cin>>a){
        list.push_back(a);
    }

    // int i = 0;
    // while(i<(list.size()-1)){
    //     cout << list[i] + list[i+1] << endl;
    //     i++;
    // }
    int size = list.size();
    if (size%2==0) size /= 2;
    else size = size/2 + 1;

    for (int i = 0 ; i<size ; i++){
        cout << list[i] + list[list.size()-1-i] << endl;
    }
    return 0;
}