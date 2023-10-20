#include<iostream>
using namespace std;

void printCounting(int num){
    for(int i=1;i<=num;i++){
        cout<<i<<" ";
    }
}

int main(){
    int n;
    cin>>n;

    printCounting(n);

    return 0;
}
// 5
// 1 2 3 4 5 