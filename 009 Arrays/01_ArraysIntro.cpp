#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int num[15];
    cout<<"14 index: "<<num[14]<<endl;

    int second[3]={5,7,11};
    cout<<"2 index: "<<second[2]<<endl;

    printArray(second,9);

    
}