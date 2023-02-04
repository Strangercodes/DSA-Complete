#include <iostream>
using namespace std;
 
int main()
{   
    int size;
    cout<<"Enter the size of array : ";
    cin>>size; 

    int arr[size], i, position; 

    cout << "\n\n Enter the " << size << " elements of the array: \n\n";
  
    for(i=0; i<size; i++)
    {
        cin >> arr[i]; 
    }
    
    //Printing the original array before deletion
    cout << "\n\n The " << size << " elements of the array, before deletion are : \n\n";
    for(i=0; i<size; i++)
    {
        cout << arr[i] << "  "; 
    }

    
    cout<<"\n\n Enter the position, between 1 and " << size << " , of the element to be deleted : ";
    cin>>position;
    
    //Performing the deletion logic
    
    --position;                //as index of the element to be deleted is 1 less than it's position
    for(i= position-1; i<=size-1; i++)
    {
        arr[i]=arr[ i+ 1];
    }
   

   cout<< " \n\nThe " << size-1 << " elements of the array, after deletion are : \n\n";
    for(i=0; i<size-1; i++)
    {
         cout << arr[i]<<"  ";
    }
    cout << "\n\n";       
    return 0;
}

