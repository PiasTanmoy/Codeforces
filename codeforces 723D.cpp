#include<bits/stdc++.h>
using namespace std;

int n, m, k;
int mat[55][55];
int visited[55][55];


void input()
{
    cin>>n>>m>>k
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>mat[i][j];
        }
    }
}

void dfs(int x, int y)
{
    visited[x][y] = 1;
}


int main()
{
    input();

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(visited[i][j] == 0){
                dfs(i, j);
            }
        }
    }

}
