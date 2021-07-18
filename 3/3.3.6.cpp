#include<iostream>
using namespace std;

// https://www.csie.ntu.edu.tw/~b98902112/cpp_and_algo/cpp/variable_swap.html

int main()
{
    int numA = 60;
    int numB = 80;
    int reg;

    reg = numA;
    numA = numB;
    numB = reg;

    cout << numA << " " << numB << endl;

    return 0;
}
