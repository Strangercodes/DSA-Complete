#include <iostream>
using namespace std;

void InsetionSort(int *arr, int size) 
{
    for(int i=1; i<size; i++)
    {
        int j = i-1;
        int temp = arr[i];
        for ( ; j>=0; j--)
        {
            if(arr[j] > temp)
            {
                //shift
                arr[j+1] = arr[j];
            }
           else
            {
                break;//stop 
            }
        }  
        arr[j+1] = temp;
                  
    }
}
int main()
{
    int arr[6] {6,5,3,2,1,9};

    InsetionSort(arr, 6);
    int size = 6;
    for(int i=0; i<size; i++)
    {
        cout << arr[i] <<" ";
    }
    return 0;
}