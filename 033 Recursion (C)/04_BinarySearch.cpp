// CodeStudio: Binary Search

#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &nums, int s, int e,int k)
{
    if(s>e)
        return -1;

    int mid= s+(e-s)/2;
    if(nums[mid]==k)
        return mid;

    if(nums[mid]<k)
        return solve(nums,mid+1,e,k);
    else    
        return solve(nums,s,mid-1,k);

}

int search(vector<int> &nums, int target) {
    // Write your code here.
    int ans = solve(nums,0,nums.size()-1,target); 
}