/*
Why do only 2 Mexicans pass the border at once? 
Because the sign says no tres-passing.
*/

#include <bits/stdc++.h>

using namespace std;
long arr1[10002];
int x=0;
bool isPrime(long n) 
{
    for (int i=0; (i<x)&&(arr1[i]<pow(n,0.5)+1); i++)
    {
        if (n % arr1[i] == 0)
        return false;
    }
    return true;
}

int main() 
{
    arr1[x++]=2;
    arr1[x++]=3;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n<=x)
        {
              cout<<(arr1[n-1])<<endl;
        }
        else
        {
            long prime=arr1[x-1];
            
            while(x<=n)
            {
                prime+=2;
                if(isPrime(prime))
                {
                    arr1[x++]=prime;
                }
            }
              cout<<(arr1[n-1])<<endl;            
        }
    }
    return 0;
}

