#include<iostream>
using namespace std;

void print(int n)
{
    // base case
    if(n==0)
        return ;

    // recursive relation
    print(n-1);
    cout<<n<<" ";    
}

int main(){

    int n;
    cin>>n;
    cout<<endl;
    print(n);

    return 0;
}

// 5

// 1 2 3 4 5 