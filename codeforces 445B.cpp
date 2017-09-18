#include<bits/stdc++.h>
using namespace std;

int n, m;
int mat[55][55];
unsigned long long int dan=1;
vector<int> G[55];
int visited[55];
int counter=0;

void input()
{
    cin>>n>>m;
    int x,y;
    for(int i=0; i<m; i++){
        cin>>x>>y;
        mat[x][y]=1;
        mat[y][x]=1;
        G[x].push_back(y);
        G[y].push_back(x);
    }
}

void dfs(int u)
{
    visited[u]=1;

    for(int v=1; v<=n; v++){
        if(mat[u][v] && !visited[v])
            dfs(v);
    }
}

void start()
{
    for(int i=1; i<=n; i++){
        if(!visited[i]){
            counter++;
            dfs(i);
        }
    }
}

void cal()
{
    for(int i=1; i<=n-counter; i++)
        dan*=2;
    cout<<dan;
}


int main()
{
    input();
    start();
    cal();
    return 0;
}
