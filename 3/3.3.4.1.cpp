#include<iostream>
using namespace std;

// https://www.csie.ntu.edu.tw/~b98902112/cpp_and_algo/cpp/practice_i_want_to_be_tall.html

int main()
{
    double height;
    int standard = 185;

    cout << "請輸入身高:";
    cin >> height;
    if( height<standard )
    {
        cout << "你還差" << standard-height << "cm" << endl;

    }
    else
    {
        cout << "已達到期望身高" << endl;
    }





}
