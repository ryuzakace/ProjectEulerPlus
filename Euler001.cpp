/*
How do you get 100 babies into a bucket?
With a blender.
*/

#include <bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long int fin;
        cin>>fin;
        fin--;
        long long int n3= fin/3;
        long long int n5=fin/5;
        long long int n15=fin/15;
        long long int a=(3*((n3)*(n3+1)/2)+5*((n5)*(n5+1)/2)-15*((n15)*(n15+1)/2));
        cout<<a<<endl;
    }
}

