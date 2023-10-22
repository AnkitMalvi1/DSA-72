// CodeStudio: Arrays
// Duplicate in Array:

/*
int findDuplicate(vector<int> &arr) 
{
    // Write your code here
    int ans=0;

    for(int i=0;i<arr.size();i++)
        ans^=arr[i];

    for(int i=1;i<arr.size();i++)
        ans^=i;

    return ans;        
}
*/

// 4 2 1 3 1
// 1

