//Spiral order printing
#include <iostream>
using namespace std;
/*we are traversing each element 1 time tot no of row and column 
would be n and m, so Time complexity of this question would be O(nm)*/


int main()
{
    int n, m;
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

    //spiral order printing 
 
    //index initialisation
    int startingRow = 0;
    int endingRow = n-1;
    int startingCol = 0;
    int endingCol = m-1;

    while(startingRow <= endingRow && startingCol <= endingCol)
    {
        //1. for starting row(left to right)
        for(int index = startingCol; index <= endingCol; index++)
        {
            cout<<arr[startingRow][index]<<" ";
        }
        startingRow ++; //starting row is now printed so point starting row to the next row

        //2. for ending column(top to bottom)
        for(int index = startingRow; index <= endingRow; index++)
        {
            cout<<arr[index][endingCol]<<" ";
        }
        endingCol --;

        //3. ending row (right to left)
        for(int index = endingCol; index >= startingCol; index--)
        {
            cout<<arr[endingRow][index]<<" ";
        }
        endingRow --;

        //4. starting column (bottom to top)
        for(int index = endingRow; index >= startingRow; index --)
        {
            cout<< arr[index][startingCol]<<" ";
        }
        startingCol++;

    }
 
    return 0;
}  