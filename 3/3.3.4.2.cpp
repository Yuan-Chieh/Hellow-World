#include<iostream>
using namespace std;

// https://www.csie.ntu.edu.tw/~b98902112/cpp_and_algo/cpp/variable_input_practice_wallet.html

int main()
{
    int own;
    int buy;

    cout << "輸入錢包裡有多少錢:";
    cin >> own;

    cout << "商品的價格:";
    cin >> buy;

    if(own>=buy)
    {
        cout << "剩下" << own-buy << "元" << endl;
    }
    else
    {
        cout << "錢不夠" << endl;
    }

}