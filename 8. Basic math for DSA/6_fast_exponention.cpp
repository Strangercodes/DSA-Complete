/*basic code for finding power not oprimize

#include <iostream>
using namespace std;
int main()
{
    int base;
    int power;
    cout<<"enter base and power: "<<endl;
    cin>>base>>power;
    int result= 1;
    for(int i=1; i<=power; i++)
    {
        result = base * result;
    }
    cout<<result<<endl;
    return 0;
}
Time complexity is O(n)
*/
#include "bits/stdc++.h"
using namespace std;

#define int long long
const int N = 1e5+2, MOD = 1e5+7;

int modularExponent(int a, int n)
{
    int ans = 1;
    a %= MOD;
    while(n>0)
    {
        if(n&1)
        ans = (ans * a) % MOD;
        a = (a * a)%MOD;
        n = n>>1;  //n = n/2;
    }
    return ans;
}

signed main()
{
    int a,n;
    cin>>a>>n;

    cout<<modularExponent(a,n)<<endl;
    return 0;
}