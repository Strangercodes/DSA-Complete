//check the number wheather it is prime or not till n
#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if(n<=1)
    return false;

    for(int i = 2; i * i<= n; i++)
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    return true;
} 

void gets_prime_till_n(int n)
{
    for(int i = 2; i<=n; i++)
    {
        if (isPrime(i))
        {
            cout<<i<<" ";
        }
    }
}
int main()
{
    int n; 
    cin>>n;

    if(isPrime(n))
    {
        cout<<"It is a prime number "<<endl;
    }
    else
    {
        cout<<"it is not a prime number "<<endl;
    }

    gets_prime_till_n(n);
    
    return 0;
}