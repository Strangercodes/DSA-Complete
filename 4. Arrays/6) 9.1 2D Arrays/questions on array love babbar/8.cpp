//Question rotate matix anticolokwise 90 degree 
//Matrix transpose Condition is matix must be digonal i.e. n*n, 3*3, 2*2. 
#include <iostream>
using namespace std;

//void searchTarget()

int main()
{
    int row, col;
    cin>>row>>col;
    int arr[row][col];

    cout<<"Enter the element "<<endl;
    for (int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>> arr[i][j];
        }
    }

    for (int i=0; i<row; i++) 
    {
        for(int j =0; j<col; j++)
        {
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int start = 0;
    int end = row * col - 1;
    int mid = start + (end-start)/2;
    int target;    // element which we are seaching for.
    
    cout<<"Enter the element you have to search : "<<endl;
    cin>>target;
    while(start<=end)
    {
        int element = arr[mid/col][mid%col];
        if(element == target)
        {
            cout<<"Element is found "<<element<<endl;
        }
        
        if(element<target)
        {
           start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start)/2;    

    }

    return 0;
}   