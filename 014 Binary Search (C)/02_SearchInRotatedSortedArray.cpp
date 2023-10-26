// CodeStudio: 
// Search in Rotated Sorted Array

/*
int binarySearch(vector<int>& arr,int s,int e,int key)
{
    
    int mid=s+(e-s)/2;

    while(s<=e){
        if(arr[mid]==key)
            return mid;
        if(key>arr[mid])
            s=mid+1;
        else
            e=mid-1;
        mid=s+(e-s)/2;           
    }
    return -1;
}

int getPivot(vector<int>& arr,int n)
{
    int s=0,e=n-1;
    int mid=s+(e-s)/2;

    while(s<e){
        if(arr[mid]>=arr[0])
            s=mid+1;
        else
            e=mid;
        mid=s+(e-s)/2;        
    }
    return s;
}

int search(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int pivot= getPivot(arr, n);
    if(k>=arr[pivot] && k<=arr[n-1])
        return binarySearch(arr, pivot, n-1,k);
    else
        return binarySearch(arr, 0, pivot-1,k);    
}
*/