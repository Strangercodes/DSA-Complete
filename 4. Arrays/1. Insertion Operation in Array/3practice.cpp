#include <iostream>
using namespace std;

int* insertion(int n,int arr[],  int x, int pos)
{
    int i;
    
    for(i=n; i>=pos; i--){
        arr[i+1]=arr[i];
    } 
    arr[pos] = x;
    n++;
    return arr;

}
 
int main()
{
   int arr[100]={0};
   int i, x, pos,n=10;

     // initial array of size 10
    for (i = 1; i < 10; i++)
        arr[i] = i + 1;

    // print the original array
    for (i = 1; i < n; i++)
        cout << arr[i] << "  ";
    cout << endl;
    
    // element to be inserted
    x = 54;
    // position at which element is to be inserted
    pos = 2;
   
    // Insert x at pos
    insertion(n, arr, x, pos);

    for(i=0; i<=n+1; i++)
      cout<<arr[i]<<"  ";
      cout<<endl;

    return 0;
}