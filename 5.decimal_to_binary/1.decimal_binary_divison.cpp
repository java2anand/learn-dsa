//1.divison number by 2
//2.store reminder (That will be a bit in binary number)
//3.Repeat above steps with the Quotient until quotient is less than 2
//4.Reverse the bit so obtained

#include<iostream>
#include<cmath>
using namespace std;

int decimalToBinaryMethod(int n)
{
    int binaryNo = 0;
    int i = 0;

    while (n > 0){
        int bit = n%2;
        binaryNo = bit*pow(10, i++) + binaryNo;
        n = n/2;
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