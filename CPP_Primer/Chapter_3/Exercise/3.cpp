// #include<iostream>
// #include<string>

// using namespace std;

// int main(){
//     string str = "this is good";
//     for (char &ch : str){
//         ch = 'x';
//     }
//     cout << str;
//     return 0;
// }

// #include<iostream>
// #include<string>

// using namespace std;

// int main(){
//     string str = "this is good";
//     int i  = 0;
//     while(str[i]){
//         str[i] = 'x';
//         i++;
//     }
    

//     for (int i = 0 ; i<str.size() ; i++){
//         str[i] = 'x';
//     }
//     cout << str;
//     return 0;
// }

//invalid bcz we are accesing the element which is not initialize yet aas the string is empty

// #include<iostream>
// #include<string>

// using namespace std;

// int main(){
//     string str;

//     while(cin >> str){
//         for (auto c : str){
//             if (!ispunct(c)){
//                 cout << c;
//             }
//         }
//         cout << endl;
//     }

    
//     return 0;
// }

//const char reference
//valid if not changing the characters fo the string s
