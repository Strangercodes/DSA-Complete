#include <iostream>
using namespace std;

//Program to print Sum of individual Rows and Columns of a Matrix | C++ Programming

void printsum(int arr[][3], int row, int col)
{
    cout<<"Printing sum --->"<<endl;
    for(int row=0; row<3; row++)
    {
        int sumRow=0;
        int sumCol=0; // cause after each iteration the sum must be 0 else it will store previous value
        for(int col = 0; col<3; col++)
        {
            sumRow += arr[row][col];
            sumCol += arr[col][row];
        }
        cout<<sumRow<<"  "<<sumCol<<"  "<<endl;
        
        
       
    }
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
    //printing sum
    printsum(arr, 3, 3); //function call
    return 0;
} 