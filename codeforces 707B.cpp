#include<bits/stdc++.h>
using namespace std;

typedef pair<long long int, long long int>PII;
vector<PII> List[100005];
vector<PII>::iterator vi;
long long int n,m,k;
long long int a[100005];
long long int index[100005];

int main()
{

    cin>>n>>m>>k;
    long long int u, v, l;
    for(int i=0; i<m; i++){
        cin>>u>>v>>l;
        List[u].push_back(PII(v, l));
        List[v].push_back(PII(u, l));
    }

    for(int i=0; i<100005; i++)
        index[i] = 0;
    int x;
    for(int i=0; i<k; i++){
        cin>>x;
        a[i] = x;
        index[x] = 1;
    }


    if(k==0){
        cout<<-1;
        return 0;
    }

    long long int MIN = 1000000005;

    for(int i=0; i<k; i++){
        for(int j=0; j<List[a[i]].size(); j++){
            if( index[List[a[i]][j].first] == 0  ){
                if(MIN > List[a[i]][j].second)
                    MIN = List[a[i]][j].second;
            }
        }
    }

    if(MIN != 1000000005)
        cout<<MIN;
    else
        cout<<-1;
    return 0;
}
