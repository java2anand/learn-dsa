#include <iostream>
using namespace std;

int main()
{
    cout << "Enter number to print";
    int n;
    cin >> n;

    int k = n;
    for (int row = 0; row < n; row++)
    {
        int c = 1;
        for (int col = 0; col < k; col++)
        {
            if (col < n-row-1){
                cout << " ";
            }else if(col <= n-1){
                cout << c;
                c++;
            }else if(col == n){
                c = c - 2;
                cout << c;
                c--;
            }else{
                cout << c;
                c--;
            }
        }
        k++;
        cout << endl;
    }
}