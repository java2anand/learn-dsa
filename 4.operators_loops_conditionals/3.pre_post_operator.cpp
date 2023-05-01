#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int b = 10;
    cout<<(++a)<<endl;
    cout<<(b++)<<endl;

    int c = 6;
    int d = ++c + 1;
    cout << d << endl;

    int e = 5;
    cout << (++e) * (e++);
    return 0;
}