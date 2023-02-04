#include <iostream>
using namespace std;

void linearSearch(int arr[], int n)
{ 
    int temp = -1;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==n){
            cout<<"Element is found at : ";
            temp=0;
        }
        if(temp==-1){
            cout<<"No element is found : ";
        }        
    }

          
}

int main()
{   
    
    int arr[6];
    cout<<"Enter the element of array : "<<endl;
    for(int i=0; i<6; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element you wann search : "<<endl;
    int num;
    cin>>num;
    
    cout<<"Enter the element you wann search : "<<endl;
    int num;
    cin>>num;

    linearSearch(arr, num);

    return 0;
}