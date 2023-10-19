// LeetCode: 231
// Power Of Two

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int ans=1;

    for(int i=0;i<=30;i++){
        if(ans==n)
            cout<<1<<endl;
        
        if(ans< INT_MAX/2)    
            ans*=2;    
    }
            
    return 0;  
}
// 1024
// 1