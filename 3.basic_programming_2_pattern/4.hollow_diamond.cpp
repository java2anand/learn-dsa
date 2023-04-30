#include<iostream>
using namespace std;

int main()
{
    cout << "Enter number to print";
    int n;
    cin >> n;

    for(int row = 0; row < n; row++)
    {
        for(int col=0; col < n-row-1; col++)
        {
            cout << " ";
        }
        for(int k = 0; k < 2*row+1; k++)
        {
            if(k == 0 || k==2*row){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }

    for(int row = 0; row < n; row++)
    {
        for(int col=0; col < row; col++)
        {
            cout << " ";
        }
        for(int k = 0; k < 2*n-2*row-1; k++)
        {
            if(k == 0 || k == 2*n - 2*row - 2){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }
}