#include<iostream>
using namespace std;

int main(){
    int a,b;
    char op;
    cin>>a;
    cin>>b;
    cin>>op;

    switch(op){
        case '+': cout<<(a+b)<<endl;
                  break;

        case '-': cout<<(a-b)<<endl;
                  break;

        case '*': cout<<(a*b)<<endl;
                  break;

        case '/': cout<<(a/b)<<endl;
                  break;

        case '%': cout<<(a%b)<<endl;
                  break;

        default: cout<<"is not valid."<<endl;          
    }

    return 0;
}
// 43
// 34
// %
// 9
