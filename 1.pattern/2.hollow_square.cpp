#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number";
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            std::cout << (i == 0 || i == n - 1 || j == 0 || j == n - 1 ? "* " : "  ");
        }
        cout << endl;
    }
}