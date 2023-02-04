/*Question
Given an array a[] of size n. Output sum of each subarray of the given array.
Idea: Iterate over all subarrays and output the sum after each iteration.
Approach
1. Write a nested loop, where outer loop runs from i=0 to i=n-1 and inner loop
runs from j=i to j=n-1.
2. Keep a curr variable which stores the sum from i to j.
3. Output curr after each iteration of inner loop. After inner loop ends, update
curr = 0.*/
#include <iostream>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int arr[n];
    
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }

   int sum = 0;
    for(int i = 0; i<n; i++){
        sum = 0;
        for(int j = i; j<n; j++){
            sum += arr[j];  // <--->   sum = sum + arr[j];
           // cout<<"arr[j] : "<<arr[j]<<endl<<endl;
            cout<<sum<<endl;
        }
    }
    
    return 0;
}