#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int n;
    int a[26];

    cin>>s;
    cin>>n;

    for(int i=0; i<26; i++)
        cin>>a[i];

    int max=a[0];

    for(int i=0; i<26; i++){
        if(max<a[i])
            max=a[i];
    }

    int sum=0;
    int c=1;

    for(int i=0; i<s.length(); i++){
        sum+=a[s[i]-'a']*(c++);
    }


    for(int i=0;i<n; i++){
        sum+=max*(c++);
    }

    cout<<sum;

    return 0;
}
