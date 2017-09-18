#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, l;
    cin>>n>>l;

    long long int a[n];
    for(long long int i=0; i<n; i++)
        cin>>a[i];

    sort(a, a+n);

    double m=-1;

    if(a[0] != 0)
        m = a[0]*2;

    for(long long int i=0; i<n-1; i++)
        if( m < (a[i+1]-a[i]) )
            m = (a[i+1]-a[i]);

    if(a[n-1] != l)
        if( m < 2*(l - a[n-1]) )
            m =  2*(l - a[n-1]);

    printf("%.12lf", m/2);
    //cout<<m/2;

    return 0;
}
