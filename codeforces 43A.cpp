#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    string s[n];
    int score[n];
    for(int i=0; i<n; i++){
        score[i]=0;
        cin>>s[i];
    }


    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(s[i] == s[j] && s[j] != " " && i!=j){
                score[i]++;
                s[j] = " ";
            }
        }
    }

    int MAX=0;
    int idx=0;

    for(int i=0; i<n; i++){
        if(MAX < score[i]){
            MAX = score[i];
            idx = i;
        }
    }

    cout<<s[idx];
    return 0;
}
