#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    cin>>n;

    long long int a[n];
    for(long long int  i=0; i<n; i++)
        cin>>a[i];

    long long int minimum = abs(a[1]-a[0]);
    long long int maximum = abs(a[n-1]-a[0]);
    cout<<minimum<<" "<<maximum<<endl;

    for(int i=1; i<n-1; i++){
        minimum = min( abs(a[i]-a[i-1]), abs(a[i]-a[i+1]) );
        maximum = max( abs(a[i]-a[n-1]), abs(a[i]-a[0]));
        cout<<minimum<<" "<<maximum<<endl;
    }

    minimum = abs(a[n-1]-a[n-2]);
    maximum = abs(a[n-1] - a[0]);
    cout<<minimum<<" "<<maximum<<endl;
    return 0;
}
