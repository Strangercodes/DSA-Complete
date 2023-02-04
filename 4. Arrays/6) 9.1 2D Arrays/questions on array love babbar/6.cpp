//matrix transpose of array with n*m condition
#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout<<"enter the size of array"<<endl;
    cin>>n>>m;
    int arr[n][m];

    cout<<"Enter the element "<<endl;
    for (int row=0; row<n; row++)
    {
        for(int col=0; col<m; col++)
        {
            cin>> arr[row][col];
        }
    }

    for (int row=0; row<n; row++)
    {
        for(int col=0; col<m; col++)
        {
            cout<< arr[row][col]<<" ";
        }
        cout<<endl;
    }
cout<<endl;
    //transpose output 
    for (int i=0; i<m; i++)   //assign row to column i.e i<m
    {
        for(int j=0; j<n; j++)  // assign column to row i.e. i<n
        {
            cout<< arr[j][i]<<" ";
        }
        cout<<endl;
    }

    return 0;
} 