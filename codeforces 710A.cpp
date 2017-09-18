#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    if(s[0]=='a' || s[0]=='h'){
        if(s[1]=='1' || s[1]=='8')
            cout<<3;
        else
            cout<<5;
        return 0;
    }

    if(s[1]=='1' || s[1]=='8'){
        if(s[0]=='a' || s[0]=='h')
            cout<<3;
        else
            cout<<5;
        return 0;
    }
    cout<<8;
    return 0;
}
