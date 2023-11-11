#include<iostream>
using namespace std;

int score=15;

void a(int& i)
{
    cout<<score<<" in a"<<endl;
    score++;
    char ch='a';
    cout<<i<<endl;
}

void b(int& i)
{
    cout<<score<<" in b"<<endl;
    cout<<i<<endl;
}

int main(){
    cout<<score<<" in main"<<endl;
    int i=5;
    a(i);
    b(i);

    return 0;
}

// 15 in main
// 15 in a
// 5
// 16 in b
// 5