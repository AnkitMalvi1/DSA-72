#include<iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++)
        fact*=i;
    return fact;    
}

int nCr(int n,int r){
    int num= factorial(n);
    int denom= factorial(r) * factorial(n-r);
    return num/denom;
}

int main(){
    int n,r;
    cin>>n>>r;

    int ncr= nCr(n,r);
    cout<<ncr<<endl;

}
// 8 2
// 28