/*
Knock Knock.
No.
*/

#include <bits/stdc++.h>

using namespace std;


int main() {
    long long int num,i,j,k,h,q,value=0,t,p=-1;
    cin>>t;
    while(t--)
    {
        p=-1;
        cin>>num;
        h=num/2-1;
        for(i=h;i>=num/3;i--)
        {
            int x=num-i;
            for(j=1;j<=x/2;j++)
            {
                k=x-j;
                if(k*k+j*j==i*i)
                {
                    if(i*j*k>p)
                    {
                        p=i*j*k;
                    }
                }
            }
        }
        cout<<p<<endl;
    }
    return 0;
}

