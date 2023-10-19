// LeetCode: 1009
// Complement of Base 10 Integer

#include<iostream>
using namespace std;

int main(){
     int n;
     cin>>n;

     int m=n;
     int mask=0;

    // Edge Case
     if(n==0)
        return 1;

     while(m!=0){
        mask= (mask<<1) | 1;
        m>>=1;
     }   

     int ans= (~n) & mask;
     cout<<ans<<endl;

     return 0;
}
// 5
// 2