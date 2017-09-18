#include<bits/stdc++.h>
using namespace std;

#define white 0
#define gray 1
#define black 2

int n;
string s[105];
int mat[26][26];
int ans=0;
int sorter=0;
int isCycle=0;
int visited[26];
int t=0;
int discoverTime[26];
int finishTime[26];
int color[26];
int parent[26];
int nv=26;
int ne;
vector<int> sorted;


void input()
{
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>s[i];
}

void makeGraph()
{
    string s1, s2;
    int flag=0;

    for(int i=0; i<n-1; i++){
        s1 = s[i];
        s2 = s[i+1];

        for(int j=0; j<min(s1.size(), s2.size()); j++){
            if(s1[j] != s2[j]){
                mat[s1[j]-'a'][s2[j]-'a'] = 1;
                //cout<<s1[j]<<" "<<s2[j]<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0 && (s1.size()>=s2.size())){
            sorter=1;
        }
        flag=0;
    }
}





void dfs(int s)
{
    t++;
    discoverTime[s] = t;
    visited[s] = 1;
    color[s] = gray;

    for(int i=0; i<nv; i++){
        if(i!=s && color[i]==gray && mat[s][i]==1)
            isCycle++;
        if(!visited[i] && mat[s][i]==1 && s!=i){
            parent[i] = s;
            dfs(i);
        }
    }
    t++;
    finishTime[s] = t;
    sorted.push_back(s);
    color[s] = black;

}




void startDfs()
{
    for(int i=0; i<nv; i++){
        if(visited[i] == 0){
            parent[i] = 0;
            dfs(i);
        }
    }
}

void print()
{
    for(int i=sorted.size()-1; i>=0; i--)
        cout<<char('a'+sorted[i]);
}


int main()
{
    input();
    makeGraph();
    if(sorter == 1){
        cout<< "Impossible";
        return 0;
    }

    startDfs();
    if(isCycle>0){
        cout<< "Impossible";
        return 0;
    }
    print();

    return 0;
}
