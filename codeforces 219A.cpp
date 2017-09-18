#include<bits/stdc++.h>

using namespace std;

int main()
{
    int k;
    cin>>k;

    string s;
    cin>>s;

    if((s.size()%k != 0)){
        cout<<-1;
        return 0;
    }

    int x[26]={0};
    int n = s.size();
    for(int i=0; i<n; i++){
        x[ s[i] - 'a' ]++;
    }

    for(int i=0; i<26; i++){
        if(x[i]%k != 0){
            cout<<-1;
            return 0;
        }
    }

    char ans[1000];
    int counter=0;

    for(int i=0; i<26; i++){
        for(int j=0; j<(x[i]/k); j++){
            ans[counter++] = char('a'+i);
        }
    }
    ans[counter] = '\0';

    for(int i=0; i<k; i++)
        cout<<ans;
    /*
    for(int i=0; i<k; i++){
        for(int j=0; j<26; j++){
            if(x[j] != 0){
                cout<<char('a'+j);
                x[j]--;
            }
        }
    }
    */
    return 0;
}
