#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row=1;

    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<(row-col+1)<<" "; // (i-j+1)
            col++;
        }
        cout<<endl;
        row++;
    }
}
// 4
// 1 
// 2 1 
// 3 2 1 
// 4 3 2 1 