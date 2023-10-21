#include<iostream>
using namespace std;

void update(int arr[],int n){
    arr[0]=44;
    arr[1]=0;

    for(int i=0;i<3;i++)
        cout<<arr[i]<<" ";
    cout<<endl;    

    cout<<"Function is finished."<<endl;
}

int main(){
    int arr[4]={1,2,3,4};
    update(arr,3);
    for(int i=0;i<4;i++)
        cout<<arr[i]<<" ";
    cout<<endl;    
}
// 44 0 3 
// Function is finished.
// 44 0 3 4 