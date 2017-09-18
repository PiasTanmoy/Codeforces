#include<bits/stdc++.h>
using namespace std;

int n;
int k;
string s[105];
string pass;
int passL;
int b=0;
int w=0;


int main()
{
    cin>>n>>k;
    for(int i=0; i<n; i++)
        cin>>s[i];

    cin>>pass;
    passL = pass.size();

    for(int i=0; i<n; i++){
        if(passL > s[i].size())
            b++;
    }

    for(int i=0; i<n; i++){
        if(passL >= s[i].size())
            w++;
    }
    w--;
    w += (w/k)*5;
    w++;
    cout<<++b<<" "<<w;

    return 0;
}

