#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, k;
    cin>>n>>k;

    long long int f[n];
    long long int t[n];

    for(long long int i=0; i<n; i++){
        cin>>f[i];
        cin>>t[i];
    }

    long long int max;

    if(t[0]<=k)
        max = f[0];
    else
        max = f[0] - (t[0]-k);

    long long int x=0;
    for(long long int i=1; i<n; i++){
        if(t[i]<=k)
             x = f[i];
        else
            x = f[i] - (t[i]-k);

       if(max<x)
            max = x;
    }

    cout<<max;

    return 0;
}


