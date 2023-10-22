// CodeStudio: Arrays, Bit Manipulation
// Find Unique:

int findUnique(int *arr, int size)
{
    //Write your code here
    int ans=0;

    for(int i=0;i<size;i++)
        ans^=arr[i];

    return ans;    
}
// 2 3 1 6 3 6 2
// 1