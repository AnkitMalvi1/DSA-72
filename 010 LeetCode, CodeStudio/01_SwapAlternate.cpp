#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}

void swapAlternate(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size)
            swap(arr[i],arr[i+1]);
    }
}

int main(){
    int even[8]={1,32,0,6,22,97,12,47};
    int odd[5]={0,2,4,4,1};
    swapAlternate(even,8);
    printArray(even,8);
    cout<<endl;
    swapAlternate(odd,5);
    printArray(odd,5);

}
// 32 1 6 0 97 22 47 12 
// 2 0 4 4 1 