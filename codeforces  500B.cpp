#include<bits/stdc++.h>
using namespace std;

int n;
int a[305];
string mat[305];
int visited[305];
vector<int>v[305];
int idx[305];
int counter=0;
int c=0;

void dfs(int s)
{
     visited[s]=1;
     for(int i=0; i<n; i++){
        if(mat[s][i]=='1' && s!=i && visited[i]==0){
            v[c].push_back(i);
            idx[counter++] = i;
        }
     }
}




int main()
{
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<n; i++)
        cin>>mat[i];

    for(int i=0; i<n; i++){
        if(visited[i] == 0){
             dfs(i);
             c++;
        }
    }

    for(int i=0; i<c; i++){
        for(int j=0; j<v[i].size(); j++){
            cout<<v[i][j]<<" ";
        }
        cout<<" "<<endl;
    }

    return 0;


}
