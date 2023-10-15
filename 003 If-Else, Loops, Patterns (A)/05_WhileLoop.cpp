#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;// 4

    int i=2;

    while(i<n){
        if(n%i==0)
            cout<<"Not prime for "<<i<<endl;
        else
            cout<<"Prime for "<<i<<endl;
        i++;    
    }
}
// Not prime for 2
// Prime for 3