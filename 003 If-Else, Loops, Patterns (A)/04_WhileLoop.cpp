#include<iostream>
using namespace std;

int main(){
    int n=5;
    // sum = n/2*(a+l)
    int i=1;
    int sum=0;
    while(i<=n){
        sum+=i;
        i++;
    }
    cout<<sum<<endl;

}
// 15