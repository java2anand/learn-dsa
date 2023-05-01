#include<iostream>
using namespace std;
int main(){
    cout << "Enter number to print";

    int n;
    cin >> n;

    for(int row = 0; row<n; row++)
    {
        int space = n - row - 1;
        for(; space>=0; space--){
            cout<<" ";
        }
        
        int start = 1;
        for(int col = 0; col<2*row+1; col++){ 
            if(row==0 || row==n-1){ 
                if(col%2==0){ 
                    cout<<start<<" "; 
                    start = start + 1;
                }
            }
            else{
                if(col==0){  
                    cout<<1;
                }
                else if(col==2*row){
                    cout<<row+1;
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}