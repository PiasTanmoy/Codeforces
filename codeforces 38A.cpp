#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int d[105];
    int a;
    int b;

    cin>>n;

    for(int i=1; i<n; i++)
        cin>>d[i];
    cin>>a>>b;

    int sum=0;

    for(int i=a; i<b; i++)
        sum+=d[i];

    cout<<sum;

    return 0;
}
