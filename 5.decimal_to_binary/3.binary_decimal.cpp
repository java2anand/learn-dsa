//Multiple each digit with its place value
//Add up all places value
//sum is the Decimal number

#include<iostream>
#include<cmath>
using namespace std;

int binaryToDecimal(int n)
{
    int decimal = 0;
    int i = 0;

    while(n)
    {
        int bit = n%10;
        decimal = decimal + bit*pow(2,i++);
        n = n/10;
    }

    return decimal; 
}

int main()
{
    int binaryNo;
    cin >> binaryNo;
    cout << binaryToDecimal(binaryNo);
}