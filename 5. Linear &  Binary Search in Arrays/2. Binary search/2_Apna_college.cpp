#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int element){
    int left = 0; 
    int right = n;
    while (left<=right){
        int mid = (left+right)/2;

        if(arr[mid]==element){
            return mid;
        }
        else if(arr[mid]<element){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return -1;         
}
 
int main()
{
    int n;
    cout<<"Enter the size of arry: "<<endl;
    cin>>n;
    
    cout<<"Enter the element of array : "<<endl;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int element;

    cout<<"Enter the element you want to search: "<<endl;
    cin>>element;
    cout<<"The element found at index : "<<binarySearch(arr, n , element);

    return 0;
}