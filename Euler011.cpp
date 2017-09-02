/*
I sent ten puns to my friend hoping that they would make him laugh.
But no pun in ten did.
*/

#include <bits/stdc++.h>

using namespace std;


int main() {
    long long int arr[24][24]={0};
    long long int i,j,p;
    
    for(int i=0;i<20;i++)
        for(int j=0;j<20;j++)
            cin>>arr[i][j];
    i=0;j=0;
    p=0;
    for(int i=0;i<20;i++)
    {
        for(int j=0;j<20;j++)
        {
            long long int m1,m2,m3,m4;
            m1=arr[i][j]*arr[i][j+1]*arr[i][j+2]*arr[i][j+3];
            m2=arr[i][j]*arr[i+1][j]*arr[i+2][j]*arr[i+3][j];
            m3=arr[i][j]*arr[i+1][j+1]*arr[i+2][j+2]*arr[i+3][j+3];
            m4=arr[i+3][j]*arr[i+2][j+1]*arr[i+1][j+2]*arr[i][j+3];
            
            p=max(p,max(max(m1,m2),max(m3,m4)));
            
        }
    }
    cout<<p; 
    return 0;
}

