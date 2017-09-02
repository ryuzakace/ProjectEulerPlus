/*
Why can't a bike stand up on it's own?
Because it's two tired.
*/

#include <bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin>>t;
    int ar[26][2]={
        {1,1},
        {2,2},
        {3,4},
        {7,6},
        {8,9},
        {15,16},
        {24,18},
        {32,20},
        {35,24},
        {63,36},
        {80,40},
        {104,48},
        {224,90},
        {384,112},
        {560,128},
        {935,144},
        {1224,162},
        {1664,168},
        {1728,192},
        {2015,240},
        {2079,320},
        {5984,480},
        {12375,576},
        {14399,648},
        {21735,768},
        {41040,1024}
    };
    while(t--)
    {
        int num;
        cin>>num;
        for(int i=0;i<26;i++)
        {
            int y=ar[i][1];
            int x=ar[i][0];
            if(y>num){cout<<x*(x+1)/2<<endl;break;}
        }
    }
    return 0;
}

