//1.Obtain bit with bitwise AND operation i.e (N & 1)
//2.Right shift N by 1. (N = N>>1)
//3.Repeat above steps till N > 0
//4.Reverse the bits so obtained

#include<iostream>
#include<cmath>
using namespace std;

int decimalToBinaryMethod(int n)
{
    int binaryNo = 0;
    int i = 0;

    while (n > 0){
        int bit = n&1;
        binaryNo = bit*pow(10, i++) + binaryNo;
        n = n >> 1;
    }
    return binaryNo;
}

int main()
{
    int n;
    cout << "Enter Number to Convert";
    cin >> n;
    int binary = decimalToBinaryMethod(n);
    cout << binary << endl;
}