#include<iostream>
using namespace std;

void dummy(int n){
    n++;
    cout<<"dummy n: "<<n<<endl;
}

int main(){
    int n;
    cin>>n;

    dummy(n);
    cout<<"n: "<<n<<endl;
}
// 15
// dummy n: 16
// n: 15