#include<bits/stdc++.h>
using namespace std;

//typedef pair<int , int > PII;
vector<int> tree[100005];
int n;
int limit;
int cat[100005];
int MAX;
//int counter;
int unSafe[100005];
int visited[100005];
int totalPath=1;
int totalUnsafePath=0;
int x[100005];

void input()
{
    cin>>n>>limit;
    int x, y;
    for(int i=1; i<=n; i++)
        cin>>cat[i];

    for(int i=1; i<=n-1; i++){
        cin>>x>>y;
        //tree[min(x,y)].push_back(max(x,y));
        tree[x].push_back(y);
        tree[y].push_back(x);
    }
}


void dfs(int u, int counter=0)
{
    int v;

    visited[u] = 1;

    if(counter>limit){
        unSafe[totalPath]=1;
        //cout<<totalPath<<endl;
    }
    if(cat[u] == 1){
        counter++;
        if(counter>limit){
            unSafe[totalPath]=1;
            //cout<<totalPath<<endl;
        }
    }
    else if(cat[u] == 0)
        counter=0;



    if(tree[u].size()==1 && u!=1)
        totalPath++;

    for(int i=0; i<tree[u].size(); i++){
        v = tree[u][i];
        if(visited[v] == 0){
            dfs(v, counter);
        }
    }
}



void start()
{
    int counter=0;
    dfs(1, counter);
}

void countUnsafePath()
{
    for(int i=0; i<100005; i++)
        if(unSafe[i]==1)
            totalUnsafePath++;
    cout<<--totalPath - totalUnsafePath;
}


int main()
{
    input();
    start();
    countUnsafePath();

    return 0;
}
