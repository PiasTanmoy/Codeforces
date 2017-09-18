#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    long long int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    long long int MIN=10000000000;

    for(int i=0; i<s.size()-1; i++){
        if(s[i]=='R' && s[i+1]=='L'){
            if(MIN > (a[i+1]-a[i])/2)
                MIN = (a[i+1]-a[i])/2;
        }
    }

    if(MIN == 10000000000)
        cout<<-1;
    else
        cout<<MIN;

    return 0;
}
