#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row=1;
    char ch= 'A'+row-1;

    while(row<=n){
        int col=1;
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
// A 
// B C 
// D E F 
// G H I J 