#include<iostream>
using namespace std;

bool linearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key)
            return 1;    
    }
    return 0;
}

int main(){
    int arr[10]={1,43, 32 ,2 ,32 ,343,42 ,-11, 3,0};
    int key;
    cin>>key;

    bool found= linearSearch(arr,10,key);
    if(found)
        cout<<"key is present"<<endl;
    else
        cout<<"key is absent"<<endl;    
}
// 0
// key is present