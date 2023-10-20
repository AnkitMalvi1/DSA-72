#include<iostream>
#include<math.h>
using namespace std;

int power(int num1,int num2){
    int ans=1;
    for(int i=1;i<=num2;i++)
        ans= ans*num1;
    return ans;    
}

int main(){
    int a,b;
    cin>>a>>b;
    int ans= power(a,b);
    cout<<ans<<endl;
    int c,d;
    cin>>c>>d;
    ans= power(c,d);
    cout<<ans<<endl;
}
// 3 4
// 81
// 3 3
// 27