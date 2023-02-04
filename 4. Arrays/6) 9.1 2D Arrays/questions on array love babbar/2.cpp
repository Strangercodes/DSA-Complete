#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//Program to print Largest sum of row

int largestRowSum(int arr[][3], int row, int col)
{
    int maxi = INT_MIN;
    int rowIndex = -1;

    for(int row=0; row<3; row++)
    {
        int sumRow=0;
        for(int col = 0; col<3; col++)
        {
            sumRow += arr[row][col];
        }
        if(sumRow>maxi)
        {
            maxi = sumRow;
            rowIndex = row;
        }
    }    
    cout<<"The maximum sum is "<<maxi<<endl;
    return rowIndex; 
}
 
int main()
{
    int arr[3][3];

    cout<<"Enter the element "<<endl;
    for (int row=0; row<3; row++)
    {
        for(int col=0; col<3; col++)
        {
            cin>> arr[row][col];
        }
    }

    for (int row=0; row<3; row++)
    {
        for(int col=0; col<3; col++)
        {
            cout<< arr[row][col]<<" ";
        }
        cout<<endl;
    }
    int ansIndex;
    ansIndex = largestRowSum(arr, 3, 3);
    cout<<"Max row is at index "<<ansIndex<<endl;
    return 0;
} 