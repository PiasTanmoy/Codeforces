#include<bits/stdc++.h>
using namespace std;

int v,e;
vector<int> G[4005];
int MIN=4005;
int sum;

void input()
{
    cin>>v>>e;

    int x,y;
    for(int i=0; i<e; i++){
        cin>>x>>y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
}


int getDegree(int node)
{
    return G[node].size();
}

bool isEdge(int node1, int node2)
{
    if(G[node1].size() <= G[node2].size()){
        for(int i=0; i<G[node1].size(); i++){
            if(G[node1][i] == node2)
                return true;
        }
    }
    else{
        for(int i=0; i<G[node2].size(); i++){
            if(G[node2][i] == node1)
                return true;
        }
    }

    return false;
}

void solve()
{
    int lim;

    for(int i=1; i<=v; i++){

        lim = G[i].size();

        for(int j=0; j<lim; j++){
            for(int k=j+1; k<lim; k++){

                if(isEdge(G[i][j], G[i][k])){
                    sum += getDegree(G[i][j]);
                    sum += getDegree(G[i][k]);
                    sum += getDegree(i);
                    sum -= 6;

                    if(MIN>sum)
                        MIN = sum;
                    sum=0;
                }
            }
        }
    }
}

int main()
{
    input();
    solve();
    if(MIN == 4005)
        cout<<-1;
    else
        cout<<MIN;

    return 0;

}
