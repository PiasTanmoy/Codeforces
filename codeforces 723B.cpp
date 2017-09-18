#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;

    cin>>n>>s;

    int n1=0;
    int n2=0;

    int p1=0;
    int p2=-1;
    int MAX=-1;
    int len=-1;
    int flag1=0 ;
    int flag2=0 ;

    for(int i=0; i<s.size(); i++){
        if(s[i] == '(')
            flag1=1;
        if(s[i] == ')')
            flag1=0;

        if((flag1==0) && ('a'<=s[i] && s[i]<='z' || 'A'<=s[i] && s[i]<='Z')){
            p1=i;
            p2=i;
            for(int j=i; j<s.size(); j++){
                if(s[j] != '_' && s[j] != '(' ){
                    p2=j;
                }
                else{
                    break;
                }
            }
        }

        len = p2-p1 + 1;
        if(MAX<len){
            MAX = len;
        }

    }

    cout<<MAX<<" ";


    int flag=0;
    int counter=0;
    p1=0;
    p2=-1;
    int l=0;
    for(int i=0; i<s.size(); i++){

        if(s[i] == '('){
            flag=1;
        }

        if(s[i] == ')')
            flag=0;

        if(flag){
            if(('a'<=s[i] && s[i]<='z' || 'A'<=s[i] && s[i]<='Z')){
                p1=i;
                p2=i;
                for(int j=i; j<s.size(); j++){
                    if(s[j] != '_' && s[j] != ')' ){
                        p2=j;
                    }
                    else{
                        if(s[j] == ')')
                            flag=0;
                        //cout<<s[j]<<endl;
                        l=j;
                        break;
                    }
                }
            }
        }

        len = p2-p1 + 1;
        if(len>0){
            //cout<<p1<<" "<<p2<<endl;
            counter++;
            len=0;
        }

        if(l!=0)
            i=l;
        l=0;
        p1=0;
        p2=-1;

    }

    cout<<counter;
    return 0;
}
