#include<iostream>
using namespace std;

int main(){
    char ch='1';
    int num=1;
    switch (num)
    {
    case 1:
        cout<<"First"<<endl;
        cout<<"First again"<<endl;
        
    case '1':
        switch(num){
            case 1:
            cout<<"num is "<<num<<endl;
            break;
        }
        cout<<"Second"<<endl;
        break;
    
    default:
        cout<<"Default"<<endl;
        break;
    }

    return 0;
}
// First
// First again
// num is 1
// Second