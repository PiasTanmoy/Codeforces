#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, c;
    cin>>n>>c;

    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int max = a[0] - a[1];
    for(int i=1; i<n-1; i++){
        if(max< a[i] - a[i+1])
            max = a[i] - a[i+1];
    }

    int ans = max - c;

    if(ans<0)
        cout<<0;
    else
        cout<<ans;

    return 0;
}


