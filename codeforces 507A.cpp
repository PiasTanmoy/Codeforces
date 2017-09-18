#include<iostream>
#include<stdio.h>

using namespace std;

#define MAX 20000


int minimum(int a[], int n)
{
    int min = a[0];
    int idx;

    for(int i=1; i<n ;i++)
        if(min>a[i]){
            min = a[i];
            idx = i;
        }

    return idx;
}


int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;

    int a[n], idx[n];

    for(int i=0; i<n; i++)
        cin>>a[i];

    int sum = 0;
    int c=0;

    while(sum<m && c<n){
        idx[c] = minimum(a, n);
        //cout<<a[idx[c]]<<endl;
        sum+=a[idx[c]];
        //cout<<sum<<endl;
        a[idx[c]] = 20000;
        c++;
    }
    //cout<<"Out of Loop"<<endl;
    if(sum>m)
        c--;

    cout<<c<<endl;

    for(int i=0; i<c; i++)
        cout<<idx[i]+1<<" ";

    return 0;
}
