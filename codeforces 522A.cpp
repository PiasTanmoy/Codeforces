#include<bits/stdc++.h>
using namespace std;

int n;
map< string , vector<string> > tree;
int MAX=0;

string lower(string s)
{
    for(int i=0; i<s.size(); i++)
        s[i]= tolower(s[i]);
    return s;
}


void input()
{
    string n1, n2, con;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>n1>>con>>n2;
        n1=lower(n1);
        n2=lower(n2);
        tree[n2].push_back(n1);
    }
}

int calDepth(string s, int k)
{
    k++;
    MAX = max(k, MAX);

    for(int i=0; i<tree[s].size(); i++)
        calDepth(tree[s][i], k);
}

void solve()
{
    calDepth("polycarp", 0);
}

int main()
{
    input();
    solve();
    cout<<MAX;
    return 0;
}
