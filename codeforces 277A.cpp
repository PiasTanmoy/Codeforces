#include<bits/stdc++.h>
using namespace std;

int n,m;
int emp[105];
int lang[105];
vector<int> e[105];
vector<int> g[105];
int x;
int node;
int pias[105][105];
int trees=0;
int no=0;
int visited[105];
int nodeExist[105];

void input()
{
    cin>>n>>m;
    for(int i=1; i<=n; i++){
        cin>>x;
        pias[i][0]=x;
        if(x==0)
            no++;
        for(int j=1; j<=x; j++){
            cin>>node;
            nodeExist[node] = 1;
            pias[i][j] = node;
        }
    }
}



void buildGraph()
{
    int seuti;
    int node1;
    int node2;
    for(int i=1; i<=n; i++){
        seuti = pias[i][0];
        for(int j=1; j<=seuti-1; j++){
            node1 = pias[i][j];
            node2 = pias[i][j+1];

            g[node1].push_back(node2);
            g[node2].push_back(node1);
        }
    }
}


void dfs(int u)
{
    int v;
    visited[u]=1;
    nodeExist[u]=0;
    for(int j=0; j<g[u].size();j++){
        v = g[u][j];
        if(!visited[v])
            dfs(v);
    }
}

void start()
{
    for(int i=1; i<=m; i++){
        if(!visited[i] && g[i].size()>0){
            dfs(i);
            trees++;
        }
    }

    for(int i=1; i<=m; i++)
        if(nodeExist[i]==1)
            trees++;
}


int main()
{
    input();
    buildGraph();
    start();
    if(no==n)
        cout<<no;
    else
        cout<<(trees-1)+no;

    return 0;
}
