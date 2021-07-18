#include<iostream>
using namespace std;

// https://www.csie.ntu.edu.tw/~b98902112/cpp_and_algo/cpp/practice_time_converter.html

int main()
{
    int hour,minute,second;
    int count;

    cout << "轉換秒數:";
    cin >> count;

    second=count%60;
    minute=count/60;
    hour=minute/60;
    minute=minute%60;

    cout << hour << " hr " << minute << " min " << second << " sec " << endl; 


}
