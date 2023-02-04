#include <iostream>
using namespace std;
 
int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n], position , i;
    cout<<"Enter the element of array : ";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<"\nArray before deletion : ";
    for(i=0; i<n; i++)
    {
        cout << arr[i]<<"  ";
    }
    
    cout<<"\nEnter the position wanna deleted : ";
    cin>>position;   
    -- position ;
    for(i=position; i<=n; i++)
    {
        arr[i]=arr[i+1];
    }
    
    cout<<"\nAfter the deletion array :\n";
    for(i=0; i<n-1; i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    return 0;
}