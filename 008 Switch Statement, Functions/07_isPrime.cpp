#include<iostream>
using namespace std;

bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}

int main(){
    int n;
    cin>>n;

    if(isPrime(n))
        cout<<"is a Prime"<<endl;
    else
        cout<<"isn't a Prime"<<endl;  

    return 0;      
}

// 34
// isn't a Prime