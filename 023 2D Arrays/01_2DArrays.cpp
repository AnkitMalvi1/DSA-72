#include<iostream>
using namespace std;

bool isPresent(int arr[][3],int target,int row, int col)
{
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            if(arr[row][col]==target)
                return 1;
        }               
    }
    return 0;
}

void printRowSum(int arr[][3],int row,int col)
{
    for(int row=0;row<3;row++){
        int sum=0;
        for(int col=0;col<3;col++)
            sum+=arr[row][col];
        cout<<sum<<" ";       
    }
    cout<<endl;
}

// void printColSum(int arr[][3],int row,int col)
// {
//     for(int col=0;col<3;col++){
//         int sum=0;
//         for(int row=0;row<3;row++)
//             sum+=arr[row][col];
//         cout<<sum<<" ";       
//     }
//     cout<<endl;
// }

int largestRowSum(int arr[][3],int row, int col)
{
    int maxi= INT_MIN;
    int rowIndex=-1;
    for(int row=0;row<3;row++){
        int sum=0;
        for(int col=0;col<3;col++)
            sum+=arr[row][col];

        if(sum>maxi){
            maxi=sum;
            rowIndex=row;
        }          
    }
    cout<<"Maximum Sum: "<<maxi<<endl; 
    return rowIndex;
}

int main(){

    int arr[3][3];
    // int arr[3][4]= {1,2,3,4,5,6,7,8,9,10,14,16};
    // int arr[3][4]= {{1,2,3,4},{5,6,7,8},{9,10,14,16}};

    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++)
            cin>>arr[row][col];
    }
    
    // for(int col=0;col<3;col++){
    //     for(int row=0;row<3;row++)s
    //         cin>>arr[row][col];
    // }

    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++)
            cout<<arr[row][col]<<" ";
        cout<<endl;       
    }

    int target;
    cin>>target;

    if(isPresent(arr,target,3,3))
        cout<<"Element found."<<endl;
    else
        cout<<"Element is not Present"<<endl;    
    
    printRowSum(arr,3,3);
    // printColSum(arr,3,3);

    int ansIndex= largestRowSum(arr,3,3);
    cout<<"Row of Max-sum at index: "<<ansIndex<<endl;

    return 0;
}

// 1 2 3 4 5 6 7 8 9
// 1 2 3 
// 4 5 6 
// 7 8 9 
// 22
// Element is not Present
// 6 15 24 
// Maximum Sum: 24
// Row of Max-sum at index: 2