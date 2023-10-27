// CodeStudio: 
// Allocate Books

#include <bits/stdc++.h> 
using namespace std;

bool isPossible(vector<int> time,int n,int m,long long mid)
{
	long long int daysCount=1;
	long long int timeSec=0;
	for(int i=0;i<m;i++){
		if(timeSec+time[i]<=mid)
			timeSec+=time[i];
		else{
			daysCount++;
			if(daysCount>n || time[i]>mid)
				return false;
			timeSec=time[i];	
		}	
	}
	return true;
}

long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
	// Write your code here.
	long long s=0,sum=0;
	for(int i=0;i<m;i++)
		sum+=time[i];
	long long e=sum,ans=-1;
	long long mid=s+(e-s)/2;

	while(s<=e){
		if(isPossible(time,n,m,mid)){
			ans=mid;
			e=mid-1;
		}
		else
			s=mid+1;
		mid=s+(e-s)/2;	
	}
	return ans;	
}




