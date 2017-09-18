#include<bits/stdc++.h>

using namespace std;
int calculate_depth(int node);
int parent[2005];

int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
        cin>>parent[i];

    int ans=-1;
    for(int i=1; i<=n; i++)
        ans = max(ans, calculate_depth(i));

    cout<<ans;
    return 0;
}

int calculate_depth(int node)
{
    if(parent[node] == -1)
        return 1;
    return 1+calculate_depth(parent[node]);
}
