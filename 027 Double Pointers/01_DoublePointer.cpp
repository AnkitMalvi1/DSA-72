#include<iostream>
using namespace std;

void update(int **p2){
    // p2= p2+1;   No Changes
    // *p2= *p2+1;  Changes
    **p2= **p2+1; // Changes
}

// void update(int *p){
//     *p= (*p) * 2;
// }

void increment(int **p){
    ++(**p);
}

int main(){
    int i=5;
    int* p= &i;
    int** p2= &p;

    // cout<<i<<endl;
    // cout<<*p<<endl;
    // cout<<**p2<<endl;

    // cout<<&i<<endl;
    // cout<<p<<endl;
    // cout<<*p2<<endl;

    // cout<<&p<<endl;
    // cout<<p2<<endl;

    cout<<"Before: "<<i<<endl;
    cout<<"Before: "<<p<<endl;
    cout<<"Before: "<<p2<<endl;
    update(p2);
    cout<<"After: "<<i<<endl;
    cout<<"After: "<<p<<endl;
    cout<<"After: "<<p2<<endl;

    int num=110;
    int *ptr= &num;
    increment(&ptr);
    cout<<num<<endl;

    return 0;
}

// Before: 5
// Before: 0xbd705ffb64
// Before: 0xbd705ffb58
// After: 6
// After: 0xbd705ffb64
// After: 0xbd705ffb58
// 111