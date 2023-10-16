#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row=1;
    int value=1;

    while(row<=n){
        int space=0;
        while(space<=row){
            cout<<" ";
            space++;
        }
        int col=n-row+1;
        while(col){
            cout<<value;
            col--;
        }
        cout<<endl;
        row++;
        value++;
    }
}
// 4
//   1111
//    222
//     33
//      4