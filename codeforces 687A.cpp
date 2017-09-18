#include<bits/stdc++.h>
using namespace std;

int MAX=100005;
vector<int> G[100005];
int color[100005];
int counter1=0;
int counter2=0;
int blue[100005];
int red[100005];
int visited[100005];
int V, E;
queue<int> Q;


void init()
{
    for(int i=0; i<MAX; i++)
        color[i] = -1;
}


void input()
{

    cin>>V>>E;

    int r, c;
    for(int i=1; i<=E; i++){
        cin>>r>>c;
        G[r].push_back(c);
        G[c].push_back(r);
    }
}

bool findBipartite(int S)
{
    if(G[S].size() == 0)
        return true;
    color[S] = 1;///blue
    blue[counter2++] = S;
    visited[S]=1;
    Q.push(S);

    while(!Q.empty()){

        int u = Q.front();
        Q.pop();

        for(int i=0; i<G[u].size(); i++){
            int v = G[u][i];///node of the graph adjacency list
            if(color[v]==-1 && !visited[v]){
                color[v] = 1 - color[u];
            if(color[v]==0)///red
                red[counter1++]=v;
            else///blue
                blue[counter2++]=v;
            visited[v]=1;
            Q.push(v);
            }
            else if(color[v]==color[u])
                return false;
        }
    }
    return true;
}


int main()
{
    init();
    input();

    bool x;

    for(int i=1; i<=V; i++){
        if(visited[i]==0){
            x = findBipartite(i);

            if(x==false){
                cout<<-1;
                return 0;
            }
        }
    }

    cout<<counter1<<endl;
    for(int i=0; i<counter1; i++)
        cout<<red[i]<<" ";
    cout<<" "<<endl;

    cout<<counter2<<endl;
    for(int i=0; i<counter2; i++)
        cout<<blue[i]<<" ";
    cout<<" "<<endl;

    return 0;
}
