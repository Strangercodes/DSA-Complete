#include<iostream>
using namespace std;
 
int main()
{
    int n; 
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    const int N = 1e6+2; //1e6 means 10^6 & const cause no one can update the value of N
    int idx[N];
    for(int i=0; i<N; i++)
    {
        idx[i] = -1;
    }
    int mindx = 999999;
    
    for(int i=0; i<n; i++)
    {
        if(idx[a[i]] != -1)
        {
            mindx = min( mindx, idx[a[i]] );
        }
        else
        {
            idx[a[i]] = i;
        }
    }

    if(mindx == 999999)
    {
        cout<<"-1"<<endl;
    }
    else{
        cout<<mindx + 1<<endl;
    }
    return 0;
}