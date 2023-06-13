#include <iostream>
using namespace std;

int main()
{
    cout << "Enter number to print";
    int n;
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col <= row; col++)
        {
            if (col == 0 || row == n-1 ||col == row)
            {
                cout << col + 1 << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}