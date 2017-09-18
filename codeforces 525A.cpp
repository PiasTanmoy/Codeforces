#include<bits\stdc++.h>

using namespace std;

int main()
{
    int n;
    int c=0;
    string s;

    cin>>n;
    cin>>s;

    int cnt[26];
    for(int i=0; i<26; i++)
        cnt[i] = 0;

    for(int i=0; i<n-1; i++){
        cnt[s[2*i] - 'a']++;

        if(--cnt[s[2*i+1]-'A']<0){
            c++;
            cnt[s[2*i]-'A']++;
        }
    }

    cout<<c;

    return 0;

}
