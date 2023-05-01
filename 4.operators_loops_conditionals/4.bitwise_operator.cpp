#include<iostream>
using namespace std;
int main(){
    bool a = false;
    bool b = true;
    cout<<(a&b)<<endl;//AND
    cout<<(a|b)<<endl;//OR
    cout<<(~a)<<endl; //NOT
    cout<<(a^b)<<endl;//XOR

    return 0;
}