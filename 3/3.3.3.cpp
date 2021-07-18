#include <iostream>
using namespace std;

// https://www.csie.ntu.edu.tw/~b98902112/cpp_and_algo/cpp/variable_assignment.html

int main()
{
    int like = 20;

    like = like + 1;             // <------ here

    cout << like << endl;
    cout << "-----------------------------------" << endl;

    cout << "function:X(100-X)(3X+5)" << endl;
    int X = 10;
    cout << "When X=10 : " << X*(100-X)*(3*X+5) << endl;

    X=30;
    cout << "When X=30: " << X*(100-X)*(3*X+5) << endl;

    X = 100;
    cout << "When X=100 : " << X*(100-X)*(3*X+5) << endl;

    return 0;

}

