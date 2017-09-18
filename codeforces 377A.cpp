#include<bits/stdc++.h>
using namespace std;


int n, m, k;
int counter=0;
char maze[505][505];
int visited[505][505];

void input()
{
    cin>>n>>m>>k;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin>>maze[i][j];
        }
    }
}


void dfs(int x, int y)
{
    if(x<1 || y<1 || x>n || y>m)
        return ;
    if(maze[x][y]!='.')
        return ;
    if(visited[x][y]==1)
        return ;

    visited[x][y]=1;
    dfs(x+1, y);
    dfs(x, y+1);
    dfs(x-1, y);
    dfs(x, y-1);

    if(k>0){
        maze[x][y] = 'X';
        k--;
    }
}


void solveMaze()
{
    for(int i=1; i<=n && k!=0; i++){
        for(int j=1; j<=m && k!=0; j++){
            dfs(i, j);
        }
    }
}


void print()
{
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cout<<maze[i][j];
        }
        cout<<""<<endl;
    }
}


int main()
{
    input();
    solveMaze();
    print();

    return 0;

}
