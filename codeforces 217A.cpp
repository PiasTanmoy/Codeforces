#include<bits/stdc++.h>
using namespace std;

int x[101], y[101], n, counter=0;
bool visited[101];

void dfs(int node)
{
    visited[node] = true;

    for(int i=1; i<=n; i++){
        if((x[i] == x[node] || y[i]==y[node]) && !visited[i]){
            dfs(i);
        }
    }
}


int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>x[i]>>y[i];

    for(int i=1; i<=n; i++){
        if(!visited[i]){
            dfs(i);
            counter++;
        }
    }

    cout<<counter-1;
    return 0;

}
