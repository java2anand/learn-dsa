#include <iostream>
using namespace std;
int main()
{
    int val;
    cin >> val;
    switch (val)
    {
    case 1:
        cout << "A";
        break;
    case 2:
        cout << "B";
        break;
    case 3:
        cout << "C";
        break;
    default:
        cout << "Default";
        break;
    }

    return 0;
}