#include<iostream>
using namespace std;

void reachHome(int src,int dest)
{
    cout<<"Source: "<<src<<" "<<"Destination: "<<dest<<endl;
    // base case
    if(src==dest){
        cout<<"reached here."<<endl;
        return;
    }
    // processing
    src++;\
    // recursive call
    reachHome(src,dest);
}

int main(){

    int dest=5;
    int src=1;
    cout<<endl;

    reachHome(src,dest);

    return 0;
}
// Source: 1 Destination: 5
// Source: 2 Destination: 5
// Source: 3 Destination: 5
// Source: 4 Destination: 5
// Source: 5 Destination: 5
// reached here.