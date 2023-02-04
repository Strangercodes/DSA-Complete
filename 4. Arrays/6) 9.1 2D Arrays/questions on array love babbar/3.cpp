#include <iostream>
using namespace std;
/*we are traversing each element 1 time tot no of row and column 
would be n and m, so Time complexity of this question would be O(nm)*/

void wavePrint(int arr[][100], int r, int c) 
{

    for(int col=0; col<c; col++ )
    {
        if( col&1 )//odd index notation, we can writtrn this also--> if( (col%2) != 0 )
        {
            //odd index  --> Botten to top iteration
            for(int row = r-1; row >= 0; row--)
            {
                cout<<arr[row][col]<<" ";
            }
        }
        else
        {
            //0 or even index ---> top to bottom
            for(int row = 0; row < r; row++)
            {
                cout<<arr[row][col]<<" ";
            }
        }
    }
}

int main()
{
    int r, c;
    cin>>r>>c;
    int arr[100][100];

    cout<<"Enter the element "<<endl;
    for (int row=0; row<r; row++)
    {
        for(int col=0; col<c; col++)
        {
            cin>> arr[row][col];
        }
    }

    for (int row=0; row<r; row++)
    {
        for(int col=0; col<c; col++)
        {
            cout<< arr[row][col]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    wavePrint(arr, r, c);
    return 0;
} 