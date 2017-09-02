/*
What did Barack Obama say to Michelle when he proposed?
I don't wanna be Obama self.
*/

#include <bits/stdc++.h>

using namespace std;


long arr1[78500];
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
        long long int n,sum=0,i=0;
        cin>>n;
        if(n<=arr1[x-1])
        {}
        else
        {
            long prime=arr1[x-1];
            
            while(arr1[x-1]<=n)
            {
                prime+=2;
                if(isPrime(prime))
                {
                    arr1[x++]=prime;
                }
            }
            
        }
        while(arr1[i]<=n)
                sum+=arr1[i++];
            cout<<sum<<endl;
    } 
    return 0;
}


