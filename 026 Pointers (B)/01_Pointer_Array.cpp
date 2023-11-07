#include<iostream>
using namespace std;

int main(){
    // int arr[10]={22,33, 13, 45};

    // cout<<"Address of arr[0]: "<<arr<<endl;
    // cout<<"Value: "<<arr[0]<<endl;
    // cout<<"Address of arr: "<<&arr[0]<<endl;

    // cout<<*arr<<endl;
    // cout<<*arr+1<<endl;
    // cout<<*(arr+1)<<endl;
    // cout<<*(arr)+1<<endl;
    // cout<<arr[2]<<endl;
    // cout<<*(arr+2)<<endl;

    // int i=3;
    // cout<<i[arr]<<endl;

    // int temp[10]={1,2};
    // cout<<sizeof(temp)<<endl;
    // cout<<sizeof(*temp)<<endl;
    // cout<<sizeof(&temp)<<endl;

    // int *ptr= &temp[0];
    // cout<<sizeof(ptr)<<endl;
    // cout<<sizeof(*ptr)<<endl;
    // cout<<sizeof(&ptr)<<endl;

    // int a[20]= {1,2,3,4};
    // cout<<&a[0]<<endl;
    // cout<<&a<<endl;
    // cout<<a<<endl;

    // int *p= &a[0];
    // cout<<p<<endl;
    // cout<<*p<<endl;
    // cout<<&p<<endl;

    int arr[10];
    int *ptr= &arr[0];
    cout<<ptr<<endl;
    ptr++;
    cout<<ptr<<endl;
    
    return 0;
}