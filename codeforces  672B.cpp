#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    int counter=0;
    if(s.size()>26){
        cout<<-1;
        return 0;
    }

    for(int i=0; i<s.size(); i++){
        for(int j=i+1; j<s.size(); j++){
            if(s[i] == s[j] && s[j]!='P'){
                s[j] = 'P';
                counter++;
            }
        }
    }

    cout<<counter;
    return 0;
}
