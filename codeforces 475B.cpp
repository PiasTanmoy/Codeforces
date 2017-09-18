#include<bits/stdc++.h>
using namespace std;

int n,m;
string h;
string v;
int flag=0;

void input()
{
    cin>>n>>m;
    cin>>h>>v;
}

void solve()
{
    if(h[0]=='>' && v[0]=='v'){
        cout<<"NO";
        return ;
    }
    if(h[0]=='<' && v[0]=='^'){
        cout<<"NO";
        return ;
    }



    if(h[0]=='>' && v[m-1]=='^'){
        cout<<"NO";
        return ;
    }
    if(h[0]=='<' && v[m-1]=='v'){
        cout<<"NO";
        return ;
    }



    if(h[n-1]=='<' && v[0]=='v'){
        cout<<"NO";
        return ;
    }
    if(h[n-1]=='>' && v[0]=='^'){
        cout<<"NO";
        return ;
    }



    if(h[n-1]=='>' && v[m-1]=='v'){
        cout<<"NO";
        return ;
    }
    if(h[n-1]=='<' && v[m-1]=='^'){
        cout<<"NO";
        return ;
    }

    cout<<"YES";
    return ;

}



int main()
{
    input();
    solve();
    return 0;

}
