#include <iostream>
#include "sales.h"

using namespace std;

int main()
{
    // Sales_item item1,item2;
    // if (cin >> item1){
    // while(cin >> item2){
    //     item1 += item2;
    // }
    // }
    // cout << item1;
    Sales_item total;
    if (std::cin >> total)
    {
        Sales_item trans;
        while (std::cin >> trans)
        {
            if (total.isbn() == trans.isbn())
                total += trans;
            else
            {
                std::cout << total << std::endl;
                total = trans;
            }
        }
        std::cout << total << std::endl;
    }
    else
    {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
    return 0;
}