/*
Why did the kid keep falling off his bike? 
Because he was a future-rapist.
*/

#include <bits/stdc++.h>

using namespace std;


int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int inp;
        cin>>inp;
        long long int sum=0;
            long long int n1=0,n2=1,n3=n1+n2;
            while(n3<=inp)
            {
                sum+=(n3%2==0)?n3:0;
                n1=n2;n2=n3;n3=n1+n2;
            }
            cout<<(sum)<<endl;
    }
    return 0;
    
}

