//Matrix transpose Condition is matix must be digonal i.e. n*n, 3*3, 2*2. 
#include <iostream>
using namespace std;
/*we are traversing each element 1 time tot no of row and column 
would be n and m, so Time complexity of this question would be O(n^2)*/

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