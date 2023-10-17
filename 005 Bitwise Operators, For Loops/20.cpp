// LeetCode: 1281
// Subtract the Product and Sum of Digits of an Integer 

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int prod=1;
    int sum=0;

    while(n!=0){
        int digit=n%10;
        prod*=digit;
        sum+=digit;
        n/=10;
    }
    int ans= prod-sum;
    cout<<ans;
    return 0;
}

// 234
// 15