#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;

    int a[n], b[m];
    int x, y;
    cin>>x>>y;

    for(int i=0;i<n; i++)
        cin>>a[i];
    for(int i=0; i<m; i++)
        cin>>b[i];

    if(a[x-1] < b[0])
        cout<<"YES";
    else
        cout<<"NO";

    return 0;

}


