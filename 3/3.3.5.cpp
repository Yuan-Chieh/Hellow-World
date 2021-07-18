#include<iostream>
using namespace std;

// https://www.csie.ntu.edu.tw/~b98902112/cpp_and_algo/cpp/repeat_input.html

int main()
{
    int A;
    int B;
    bool buy=true;

    while( buy )
    {
        cout << "輸入商品價格:";
        cin >> A >> B ;
        if (A<0 || B<0)
        {
            buy=false;
        }
        else
        {
            cout << "兩樣共" << A+B << "元" << endl;

        }
        
        
    }

    return 0;
}
