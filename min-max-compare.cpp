//find minimum and maximum value in array C++
#include <iostream>
using namespace std;
 
int main()
{
    int n; 
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

        int currentmax = arr[0];
        int currentmin = arr[0];

    for(int i = 0; i<n; i++){
           
            if(currentmax < arr[i]){
            currentmax = arr[i];
        }

        if(currentmin > arr[i]){
            currentmin = arr[i];
        }
    }
    cout<<"Maximum value : "<<currentmax<<endl;
    cout<<"Minimum value : "<<currentmin<<endl;
    
    
    return 0;
}