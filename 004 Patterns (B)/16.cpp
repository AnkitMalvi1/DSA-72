#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row=1;

    while(row<=n){
        int col=1;
        char ch= 'A'+n-row; // 'A'+n-i
        while(col<=row){
            cout<<ch<<" "; 
            ch++;
            col++;
        }
        cout<<endl;
        row++;
    }
}
// 4
// D 
// C D 
// B C D 
// A B C D 