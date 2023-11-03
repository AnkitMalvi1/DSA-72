// LeetCode: 1910
// Remove All Occurrences of a Substring

#include<iostream>
using namespace std;

string removeAllOccurrences(string s, string part)
{
    while(s.length()!=0 && s.find(part)<s.length())
        s.erase(s.find(part),part.length());

    return s;    
}