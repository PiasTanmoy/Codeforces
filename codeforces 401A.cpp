#include<bits/stdc++.h>

using namespace std;

int mod(int x)
{
    if(x<0)
        return x*(-1);
    return x;
}


int celling(int x, int y)
{
    int div;
    div = x/y;

    if(x - div*y)
        return div+1;
    return div;
}

int main()
{
    int n, m;
    cin>>n>>m;

    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int sum=0;
    for(int i=0; i<n; i++){
        sum+=a[i];
    }

    int x;
    x = 0 - sum;
    x = mod(x);

    int y;
    y = celling(x, m);

    cout<<y;

    return 0;
}
