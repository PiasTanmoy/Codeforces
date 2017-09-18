#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;

    string s[n];

    for(int i=0; i<n; i++)
        cin>>s[i];

    int counter=0;

    bool success[n];
    for(int i=0; i<n; i++)
        success[i] = false;

    char MAX[m];
    for(int i=0; i<m; i++)
        MAX[i] = '\0';

    int flag=0;

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(MAX[i]<s[j][i])
                MAX[i] = s[j][i];
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(s[j][i] == MAX[i])
                success[j] = true;
        }
    }

    for(int i=0; i<n; i++)
        if(success[i] == true)
            counter++;

    cout<<counter;
    return 0;
}
