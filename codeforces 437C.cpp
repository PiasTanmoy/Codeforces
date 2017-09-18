#include<bits/stdc++.h>
using namespace std;

typedef pair<int , int > PII;
vector<int> V[1005];
int ne, nv;
vector<PII> w;
int weight[1005];
int mat[1005][1005];

bool cmp(PII A, PII B)
{
    return A.first < B.first;
}

void input()
{
    cin>>nv>>ne;
    for(int i=1; i<=nv; i++){
        cin>>weight[i];
        w.push_back(PII(weight[i], i));
    }

    int x , y;
    for(int i=1; i<=ne; i++){
        cin>>x>>y;
        V[x].push_back(y);
        V[y].push_back(x);
        mat[x][y]=1;
        mat[y][x]=1;
    }
}

int sum=0;

void solve()
{
    sort(w.begin(), w.end(), cmp);
    int u, v, x;
    for(int i=0; i<nv; i++){
        u = w[i].second;
        x = w[i].first;
        for(int j=1; j<=nv; j++){
            if(mat[u][j] == 1){
                sum+=x;
                mat[u][j]=0;
                mat[j][u]=0;
            }
        }
    }
}



int main()
{
    input();
    solve();
    cout<<sum;

    return 0;

}
