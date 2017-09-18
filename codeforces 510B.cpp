#include<bits/stdc++.h>
using namespace std;

#define white 0
#define gray 1
#define black 2

int n, m;
string mat[51];
int counter=0;
int ans=0;
int len=0;
int alpha[26];
int store[26];
int diff=0;
int visited[55][55];


void input()
{
    cin>>n>>m;
    for(int i=0; i<n; i++)
        cin>>mat[i];

    for(int i=0; i<55; i++)
        for(int j=0; j<55; j++)
            visited[i][j]=white;
}

//char stat;

void dfs(int x, int y, char cur, char stat)
{

    if(x<0 || y<0 || x>=n || y>=m)
        return ;

    if(mat[x][y] != cur)
        return ;

    if(stat == 'd')//u
        if((x+1)<n&&visited[x+1][y]==gray || (y+1)<m&&visited[x][y+1]==gray || (y-1)>0&&visited[x][y-1]==gray){
            ans=1;
            return ;
        }

    if(stat == 'r')//l
        if((x+1)<n&&visited[x+1][y]==gray || (y+1)<m&&visited[x][y+1]==gray || (x-1)>0&&visited[x-1][y]==gray){
            ans=1;
            return ;
        }

    if(stat == 'l')//r
        if((x+1)<n&&visited[x+1][y]==gray|| (y-1)>0&&visited[x][y-1]==gray || (x-1)>0&&visited[x-1][y]==gray){
            ans=1;
            return ;
        }

    if(stat == 'u')//d
        if((x-1)>0&&visited[x-1][y]==gray|| (y+1)<m&&visited[x][y+1]==gray || (y-1)>0&&visited[x][y-1]==gray){
            ans=1;
            return ;
        }

    visited[x][y]=gray;
    cout<<"pias"<<endl;
    if(mat[x+1][y]==cur && visited[x+1][y]==white && (x+1<n))
        dfs(x+1, y, cur, 'd');
    if(mat[x][y+1]==cur && visited[x][y+1]==white && (y+1<m))
        dfs(x, y+1, cur, 'r');
    if(mat[x-1][y]==cur && visited[x-1][y]==white && (x-1>0))
        dfs(x-1, y, cur, 'u');
    if(mat[x][y-1]==cur && visited[x][y-1]==white && (y-1>0))
        dfs(x, y-1, cur, 'l');

    return ;
    //visited[x][y]=black;
}


void start()
{
    char pias;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<i<<" "<<j<<endl;
            if((visited[i][j]==white) && (ans==0)){
                pias = mat[i][j];
                cout<<pias<<endl;
                dfs(i,j, pias, 'a');
            }
        }
    }
}

int main()
{
    //freopen("out.txt", "w", stdout);
    input();
    start();

    if(ans)
        cout<<"Yes";
    else
        cout<<"No";

    return 0;

}
