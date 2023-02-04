#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int element)
{
    while(left<=right)
    {

        int mid = (left+right) / 2;     //In This condition () is most imp
     // or int mid = left + (right - left)/2
        if (arr[mid]==element)
        { 
            return mid;
        }
        else if(arr[mid]<element)
        {
            left = mid + 1;
        }
        else
        {
          right = mid - 1;
        }
    }
    return -1;
}

 
int main()
{
    int num;           // Number you want to search.
    int output;
    int arr[10];

    cout<<"Enter the 10 element of array in acendinng order : "<<endl;
    for(int i=0; i<10; i++){
        cin>>arr[i];
    }

    cout<< "Enter the element of array want to search : "<<endl;
    cin>>num;

    output = binarySearch(arr, 0, 9, num);

    if(output==-1)
    {
        cout<<"Element is not found"<<endl;        
    }
    else{
        cout<<"Element is found at index : "<<output<<endl;
    }

    return 0;
}