#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    char a[n][m];
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin>>a[i][j];

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++){
            if(a[i][j] == 'C' || a[i][j] == 'Y' || a[i][j] == 'M'){
                cout<<"#Color";
                return 0;
            }
        }

    cout<<"#Black&White";
    return 0;
}
