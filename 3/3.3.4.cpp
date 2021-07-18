#include<iostream>
using namespace std;

// https://www.csie.ntu.edu.tw/~b98902112/cpp_and_algo/cpp/variable_input.html

int main()
{
    int priceA;
    int priceB;
    int priceTotal;

    cin >> priceA >> priceB;           // <==== here

    priceTotal = priceA+priceB;

    cout << priceTotal << endl;

    return 0;
}