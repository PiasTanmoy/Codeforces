#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> PII;
vector<PII> G[305];
int index[305];
int n;
int a[305];
string mat[305];
int visited[305];
int counter=1;

void input()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=n; i++)
        cin>>mat[i];
}



void dfs(int u)
{
    visited[u] = 1;
    int v;

    for(int i=1; i<=n; i++){
        v = a[i];
        if(mat[u][i-1]=='1' && visited[v]==0){
            G[counter].push_back(PII(i, v));
            cout<<counter<<" "<<i<<" "<<v<<endl;
            dfs(v);
        }
    }
}


bool cmp(PII A, PII B)
{
    return A.second<B.second;
}


void sortAll()
{
    for(int i=1; i<counter; i++)
        sort(G[i].begin(), G[i].end(), cmp);

}



void getConnected()
{
    for(int i=1; i<=n; i++){
        if(visited[a[i]] == 0){
            //cout<<i<<" ";
            dfs(a[i]);
            counter++;
             //cout<<i<<" "<<endl;
        }
    }
    cout<<" "<<endl;
}



void print()
{
    for(int i=0; i<counter; i++){
        for(int j=0; j<G[i].size(); j++)
            cout<<G[i][j].second<<" ";
        cout<<" "<<endl;
    }
}



int main()
{
    input();
    getConnected();
    print();
    sortAll();
    print();

    return 0;
}
