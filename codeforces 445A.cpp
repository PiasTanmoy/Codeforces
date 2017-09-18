#include<bits/stdc++.h>
using namespace std;

char s[105][105];
int n, m;
string ans[105][105];
int counter=0;


void input()
{
    cin>>n>>m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>s[i][j];
        }
    }
}

void solve()
{
    for(int i=0; i<n; i++){

        if(m%2==0)
            counter++;
        for(int j=0; j<m; j++){
            if(s[i][j]=='-')
                ans[i][j] = '-';
            else if(counter%2==1)
                ans[i][j] = 'W';
            else if(counter%2==0)
                ans[i][j] = 'B';
            counter++;
        }
        ans[i][m] = '\0';
    }
}

void print()
{
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)
            cout<<ans[i][j];
        cout<<" "<<endl;
    }
}

int main()
{
    input();
    solve();
    print();

    return 0;
}
