// #include<iostream>
// #include<string>
// #include<vector>

// using namespace std;

// int main(){
//     int order;
//     cin >> order;

//     int arr[order][order];

//     for (int i = 0 ; i<order ; i++){
//         for (int j = 0 ; j<order;  j++){
//             cin >> arr[i][j];
//         }
//     }

//     int row = 0 , col = 0;

//     for (int i = 1 ; i<=(order-1) ; i++){
//         int temp = col;
//         for (int j = 0 ; j<i ; j++){
//             cout << arr[row][col] << " ";
//             if (j != i - 1){
//             col--; row++;
//             }
//         }
//         col = ++temp;
//         row = 0;
//     }

//     row = 0;
//     col = order-1;

//     for (int i = 0 ; i<order ; i++){
//         cout << arr[row][col] << " ";
//         row++;
//         col--;
//     }
//     row = 1;
//     col = order -1;

//     for (int i  = 1 ; i<=(order-1) ; i++){
//         int temp = col;
//         for (int j = order-i; j>0 ; j-- ){
//             cout << arr[row][col] << " ";
//             if (j != order-i-1){
//             row++; col--;
//             }
//             col = order-1;
//             row = 

//         }
        
//     }


//     return 0;
// }