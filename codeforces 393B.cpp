#include<bits/stdc++.h>
using namespace std;

int n;
string s;
int counter1=0;
int counter2=0;
int c1=0;
int c2=0;

int main()
{
    cin>>n>>s;

    for(int i=0; i<s.size(); i++){
        if(s[i]=='r')
            counter1++;
        else
            counter2++;
    }

    for(int i=0;i<s.size()-1; i++){
        if(s[i] == s[i+1] && s[i]=='r'){
            c1++;
            c2--;
        }
        else if(s[i] == s[i+1] && s[i]=='b'){
            c1--;
            c2++;
        }
    }


    if(counter1 == counter2){
        cout<<0;
        return 0;
    }

    if(abs(counter1-counter2)==1){
        cout<<0;
        return 0;
    }

    cout<<abs(counter1-counter2)
}
