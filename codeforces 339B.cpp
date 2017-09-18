#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,m;
    cin>>n>>m;

    long long int a[m];
    for(long long int i=0; i<m; i++)
        cin>>a[i];

    long long int sum = a[0] - 1;

    for(long long int i=1; i<m; i++){
        if(a[i]>=a[i-1])
            sum+=(a[i] - a[i-1]);
        else{
            sum+=( (n - max(a[i], a[i-1]))+min(a[i], a[i-1]) );
        }
    }
    cout<<sum;
    return 0;
}
