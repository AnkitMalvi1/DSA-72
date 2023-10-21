#include<iostream>
using namespace std;

int getMin(int num[],int n){
    int minimum=INT_MAX;
    for(int i=0;i<n;i++){
        minimum=min(minimum,num[i]);
        // if(num[i]<minimum)
        //     minimum=num[i];
    }
    return minimum;
}

int getMax(int num[],int n){
    int maximum=INT_MIN;
    for(int i=0;i<n;i++){
        maximum=max(maximum,num[i]);
        // if(num[i]>maximum)
        //     maximum=num[i];
    }
    return maximum;
}

int main(){
    // int size;
    // cin>>size;
    int num[10];
    for(int i=0;i<10;i++)
        cin>>num[i];
    cout<<"Minimum: "<<getMin(num,10)<<endl;    
    cout<<"Maximum: "<<getMax(num,10)<<endl;    
}
// 12 0 2 32 -1 22 -22 11 3 01
// Minimum: -22
// Maximum: 32