#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;

    int a[n+1];
    for(int i=1; i<=n; i++)
        a[i]=0;
    int x, y;
    for(int i=1; i<=m; i++){
        cin>>x>>y;
        a[x]=1;
        a[y]=1;
    }

    int c;
    for(int i=1; i<=n; i++)
        if(a[i] == 0){
            c=i;
            break;
        }

    cout<<n-1<<endl;

    for(int i=1; i<=n; i++){
        if(c != i){
            cout<<c<<" "<<i<<endl;
        }
    }
    return 0;
}
