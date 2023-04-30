#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number";
    cin >> n;

    for(int i=0; i<n; i++){
        int j;
        for(j=0; j< i+1; j++){
            int ans = j + 1;
            char ch = ans + 'A' - 1;
            cout << ch;
        }

        j = j-1;
        for(; j >=1; j=j-1){
            int ans = j;
            char ch = ans + 'A' - 1;
            cout << ch;
        }
        cout << endl;
    }
}
