#include<iostream>
using namespace std;

int main(){
    int a=1;
    int b=2;

    if(a-- > 0 || ++b > 2)
        cout<<"Stage 1- Inside If";
    else
        cout<<"Stage 2- Inside Else";
    cout<<a<<" "<<b<<endl;        
}
  
// Stage 1- Inside If  0 2
