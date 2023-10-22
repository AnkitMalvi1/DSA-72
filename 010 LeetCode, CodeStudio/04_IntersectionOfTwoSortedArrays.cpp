// CodeStudio: Arrays, Sorting
// Intersection of Two Sorted Arrays

/*
#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
	int i=0,j=0;
	vector<int> ans;
	while(i<n && j<m){
		if(arr1[i]==arr2[j]){
			ans.push_back(arr1[i]);
			i++;
			j++;
		}	
		else if(arr1[i]<arr2[j])
			i++;
		else
			j++;	
	}
	return ans;
}
*/

// 1 2 2 2 3 4
// 2 2 3 3

// 2 2 3