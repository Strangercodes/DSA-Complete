#include <iostream>
using namespace std;
 
int main()
{
    cout<<"Enter the size of the array"<<endl;
    int n;
    cin>>n;
    cout<<"enter the elements you want to sort : "<<endl;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    int counter = 1; //for taking iterations i can also use here counter = 0 
    while(counter<n-counter)
    {
        for(int i=1; i<n-counter; i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
            
        }
        counter++;
        
    }
    
    cout<<"Your bubble sorted array : "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }  
    cout<<endl;
    return 0;
}