#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;
    int a[n], c[6] = {0};

    for(int i=0; i<n; i++)
        cin>>a[i];

    for(int i=0; i<n; i++)
        c[a[i]]++;

    int sum=0;
    for(int i=0; i<=5-k; i++){
        sum+=c[i];
    }

    int teams = sum/3;

    cout<<teams;

    return 0;
}
