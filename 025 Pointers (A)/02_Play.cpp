#include<iostream>
using namespace std;

int main(){
    
    // int *p=0;
    // cout<<*p<<endl;

    // int i=5;
    // int *q = &i;
    // cout<<q<<endl;
    // cout<<*q<<endl;

    // int *p=0;
    // p= &i;
    // cout<<p<<endl;
    // cout<<*p<<endl;

    int num=5;
    int a=num;
    cout<<"a before "<<num<<endl;
    a++;
    cout<<"a after "<<num<<endl;

    int *p=&num;
    cout<<"a before "<<num<<endl;
    (*p)++;
    cout<<"a after "<<num<<endl;

    int *q=p;
    cout<<p<<" - "<<q<<endl;
    cout<<*p<<" - "<<*q<<endl;

    int i=3;
    int *t = &i;
    *t = *t + 1;
    cout<<*t<<endl;
    cout<<"before t "<<t<<endl;
    t = t + 1;
    cout<<"after t "<<t<<endl;

    return 0;
}
// a before 5
// a after 5
// a before 5
// a after 6
// 0x949cbffa6c - 0x949cbffa6c
// 6 - 6
// 4
// before t 0x949cbffa68
// after t 0x949cbffa6c