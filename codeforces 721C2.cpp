#include<bits/stdc++.h>

using namespace std;

typedef pair<int ,int > PII;
int v;
int e;
long long int w;
long long int MAX=0;
int counter=0;
vector<PII> G[5005];
visited[5005];


void input()
{
    cin>>v>>e>>w;
    long long int x,y,z;
    for(int i=0; i<e; i++){
        cin>>x>>y>>z;
        G[x].push_back(PII(y,z));
    }
}


void dfs(int u)
{
    visited[u]=1;
    int v;

    for(int i=0; i<G[u].size(); i++){
        v = G[u][i].first;
        if(!visited[v]){
            MAX += G[u][i].second;
            dfs(v);
        }
    }
}




void start()
{
    for(int i=0; i<v; i++){
        if(!visited[i]){
            dfs(i);
        }
    }
}


int main()
{

}
