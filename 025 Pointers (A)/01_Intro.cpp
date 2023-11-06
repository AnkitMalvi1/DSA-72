#include<iostream>
using namespace std;

int main(){

    int num=5;
    cout<<num<<endl;
    cout<<&num<<endl;

    int *ptr= &num;
    cout<<"Address: "<<ptr<<endl;
    cout<<"Value: "<<*ptr<<endl;

    double d=4.3;
    double *p2= &d;
    cout<<"Address: "<<p2<<endl;
    cout<<"Value: "<<*p2<<endl;

    cout<<"Size of integer is: "<<sizeof(num)<<endl;
    cout<<"Size of pointer is: "<<sizeof(ptr)<<endl;
    cout<<"Size of pointer is: "<<sizeof(p2)<<endl;

    return 0;
}

// 5
// 0x66dfdff9ac
// Address: 0x66dfdff9ac
// Value: 5
// Address: 0x66dfdff9a0
// Value: 4.3
// Size of integer is: 4
// Size of pointer is: 8
// Size of pointer is: 8