#include<iostream>
using namespace std;
int global = 6;//set global
int main()
{
    int a; //Declaration
    int b = 5; //intialization
    b = 10;
    
    if(true)
    {
        int b = 7;//scope variable
        cout<< b << endl;
    }

    cout << global << endl;
    cout << b << endl;
    return 0;
}