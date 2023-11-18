// CodeStudio: Subsequences of String

#include<bits/stdc++.h>
using namespace std;

void subset(string str, vector<string>&ans,string output,int index)
{
    //base case:
    if(index>=str.length()){
    	if(output.length()>0){
        	ans.push_back(output);
    	}
    return ;
    }

    //excluding:
    subset(str, ans, output, index+1);
    //including:
    char element = str[index];
	output.push_back(element);
    subset(str,ans,output,index+1); 
}
vector<string> subsequences(string str){
	
	// Write your code here
    vector<string>ans;
    string output="";
    int index = 0;
    subset(str, ans, output , index);

    return ans;
}

