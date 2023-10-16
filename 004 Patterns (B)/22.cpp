#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row=1;

    while(row<=n){
        int space=0;
        while(space<=row){
            cout<<" ";
            space++;
        }
        int col=n-row+1;
        int value=1;
        while(col){
            cout<<value;
            col--;
            value++;
        }
        cout<<endl;
        row++;
    }
}
// 4
//   1234
//    123
//     12
//      1