#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    char s[n][11];
    char a[m][11];
    char b[m][11];

    for(int i=0; i<m; i++){
        cin>>a[i];
        cin>>b[i];
    }

    for(int i=0; i<n; i++)
        cin>>s[i];
    for(int j=0; j<n; j++)
        for(int i=0; i<m; i++){
            if(!strcmp(s[j], a[i])){
                if(strlen(a[i]) <= strlen(b[i]))
                    cout<<a[i]<<" ";
                else
                    cout<<b[i]<<" ";
                break;
            }
        }

    return 0;
}


