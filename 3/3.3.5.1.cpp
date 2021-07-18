#include<iostream>
using namespace std;

// https://www.csie.ntu.edu.tw/~b98902112/cpp_and_algo/cpp/practice_x_polynomial.html

int main()
{
    int a,b,c,X;
    int ans;

    while( cin >> a >> b >> c >> X )
    {
        ans=a*X*X+b*X+c;
        cout << ans << endl;
    }

}