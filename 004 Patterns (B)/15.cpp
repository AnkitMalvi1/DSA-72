#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row=1;

    while(row<=n){
        int col=1;
        while(col<=row){
            char ch= 'A'+row+col-2;
            cout<<ch<<" "; 
            col++;
        }
        cout<<endl;
        row++;
    }
}
// 4
// A 
// B C 
// C D E 
// D E F G 