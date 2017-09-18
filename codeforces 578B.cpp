#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n, k, x;
    cin>>n>>k>>x;

    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int max=a[0], idx=0;

    for(int i=1; i<n; i++){
        if(max<a[i]){
            max = a[i];
            idx = i;
        }
    }


    for(int i=0; i<k; i++)
        max *=x;

    a[idx] = max;

    for(int i=1;i<n; i++){
        a[i] = (a[i-1] | a[i]);
    }

    cout<<a[n-1];

    return 0;
}


