#include<iostream>
using namespace std;

int main()
{
    cout << "Enter number to print";
    int n;
    cin >> n;

    for(int row = 0; row < n; row++)
    {
        for(int col=0; col < row; col++)
        {
            cout << "  ";
        }
        for(int k = 0; k < n-row; k++)
        {
            cout << "*   ";
        }
        cout << endl;
    }
}