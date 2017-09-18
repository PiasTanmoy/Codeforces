#include<bits/stdc++.h>
using namespace std;


int n;
string s[1005];
int r, c1,c2;


void input()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>s[i];
}


bool check_validity()
{
    for(int i=1; i<=n; i++){
        //cout<<(s[i][0]=='O' && s[i][1]=='O')<<endl;
        if( (s[i][0]=='O' && s[i][1]=='O')){
            s[i][0]='+';
            s[i][1]='+';
            return true;
        }
        if( (s[i][3]=='O' && s[i][4]=='O') ){
            s[i][3]='+';
            s[i][4]='+';
            return true;
        }
    }

    return false;
}



void print()
{
    for(int i=1; i<=n; i++)
        cout<<s[i]<<endl;
}



int main()
{
    input();
    if(check_validity()){
        cout<<"YES"<<endl;
        print();
    }
    else
        cout<<"NO";
    //print();

    return 0;

}
