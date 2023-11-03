// LeetCode: 344
// Reverse String

#include<bits/stdc++.h>
using namespace std;

void reverseString(vector<char> &s)
{
    int st=0, e=s.size()-1;
    while(st<e)
        swap(s[st++],s[e--]);
}