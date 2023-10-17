// LeetCode: 191
// Number of 1 Bits

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count=0;
    while(n!=0){
        if(n&1)
            count++;
        n>>=1;    
    }
    cout<<count;

    return 0;
}
// 5
// 2