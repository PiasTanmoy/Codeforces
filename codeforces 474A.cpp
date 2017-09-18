#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s1 = "qwertyuiop";
    string s2 = "asdfghjkl;";
    string s3 = "zxcvbnm,./";
    string s;
    char ch;
    cin>>ch>>s;

    if(ch == 'R'){
        for(int i=0; i<s.size(); i++){
            for(int j=0; j<s1.length(); j++){
                if(s[i] == s1[j]){
                    cout<<s1[j-1];
                    break;
                }
                if(s[i] == s2[j]){
                    cout<<s2[j-1];
                    break;
                }
                if(s[i] == s3[j]){
                    cout<<s3[j-1];
                    break;
                }
            }
        }
    }

    if(ch == 'L'){
        for(int i=0; i<s.size(); i++){
            for(int j=0; j<s1.length(); j++){
                if(s[i] == s1[j]){
                    cout<<s1[j+1];
                    break;
                }
                if(s[i] == s2[j]){
                    cout<<s2[j+1];
                    break;
                }
                if(s[i] == s3[j]){
                    cout<<s3[j+1];
                    break;
                }
            }
        }
    }
    return 0;
}

