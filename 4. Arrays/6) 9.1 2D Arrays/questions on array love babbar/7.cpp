//Question rotate matix anticolokwise 90 degree 
//Matrix transpose Condition is matix must be digonal i.e. n*n, 3*3, 2*2. 
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n>>n;
    int arr[n][n];

    cout<<"Enter the element "<<endl;
    for (int row=0; row<n; row++)
    {
        for(int col=0; col<n; col++)
        {
            cin>> arr[row][col];
        }
    }

    for (int row=0; row<n; row++) 
    {
        for(int col=0; col<n; col++)
        {
            cout<< arr[row][col]<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<endl;
    //swaping of element for transpose
   for(int i=0; i<n; i++)
   {
       for(int j = 0; j<=i; j++)
       {
           swap(arr[i][j], arr[j][i]);
       }
   }

   
//swaping rows of the matrix eg if we have matix 3*3
    /* 1 2 3                   2 0 3
       3 2 1      --to-->      3 2 1    
       2 0 3                   1 2 3      */

    for(int i = 0; i<n/2; i++)
    {
      /**/  for(int j = 0; j<n; j++)
        {
            //column i.e. j will not be change
            swap(arr[i][j], arr[n-1-i][j]);
        }
    }

    for (int row=0; row<n; row++) 
    {
        for(int col=0; col<n; col++)
        {
            cout<< arr[row][col]<<" ";
        }
        cout<<endl;
    }
    return 0;
}  