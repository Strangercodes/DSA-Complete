#include <iostream>
using namespace std;
 
int main()
{
    int n = 6;
    int arr[n] = {8,5,4,2,6,1};
    //insertion sort
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            cout << j << endl;
            if(arr[j]<arr[i])
            {
               swap(arr[j], arr[i]);
            }
        }
    }


    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}