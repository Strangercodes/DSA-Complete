#include <iostream>
using namespace std;
 
int main()
{   
    // Decletation of variables.

    int arr[50];    // Decleration of array
    int x;         // What element to be insert
    int position;  // Where to insert(index of array)
    int i;         // Index to move the loop
    int n;         // Size of an array
   
    //  To take input and print the array
    cout<<"\nEnter the size of an array : ";
    cin>>n;

    cout<<"Enter the elements of arry"<<endl;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"\nArrays before insertion : \n";
      for(i=0; i<n; i++)
    {
        cout<<arr[i]<<"  ";
    }

    cout<<"\nEnter the element want to insert : "<<endl;
    cin>>x;
    cout<<"Enter the position where need to insert : "<<endl;
    cin>>position;
   
   //Insertion operation 
    for(i=n; i>=position; i--)
    {
        arr[i]=arr[i-1];   // or i can write as arr[i+1]=a[i];
    }

    arr[position]=x;  // inserting an array to the position
    
    cout<<"Array after the insertion"<<endl;
    // Display array
    for(i=0; i<=n; i++)
    {
        cout<<arr[i]<<"  ";
    }

    n+=1; //Increase the size of arry
     
    return 0;
}