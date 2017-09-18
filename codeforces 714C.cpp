#include<bits/stdc++.h>
using namespace std;


int counter=0;
string s[100005];
int n;
char x;
string xx;
int num=0;
int ans=0;
char space;


void include()
{
    s[counter] = xx;
    counter++;
    num++;
}

void exclude()
{
    for(int i=0; i<counter; i++){
        if(s[i] == xx){
            s[i] = "s";
            num--;
            return ;
        }
    }
}

void count_pat()
{
    int s1;
    int s2;
    int flag=0;
    ans=0;

    for(int i=0; i<counter; i++){

        if(s[i]!="s"){
            s1 = s[i].size();
            s2 = xx.size();

            for(int j=0; j<min(s1,s2); j++){

                if(xx[s2-1-j] == '0'){
                    if( (s[i][s1-1-j]-'0')%2 != 0 ){
                        flag=1;
                        break;
                    }
                }

                else if(xx[s2-1-j] == '1'){
                    if( (s[i][s1-1-j]-'0')%2 == 0 ){
                        flag=1;
                        break;
                    }
                }


            }

            if(s1<s2){
                for(int seuti=0; seuti<(s2-s1); seuti++){
                    if(xx[seuti] != '0'){
                        flag=1;
                        break;
                    }
                }
            }
            if(s1>s2){
                for(int seuti=0; seuti<(s1-s2); seuti++){
                    if( (s[i][seuti]-'0')%2 !=0 ){
                        flag=1;
                        break;
                    }
                }
            }

            if(flag==0){
                ans++;
                //cout<<"XXX"<<" "<<counter<<endl;
            }

            flag=0;

        }
    }
}

void print()
{

    for(int i=0; i<counter; i++)
        cout<<s[i]<<endl;
}


void input()
{
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x;
        //cin>>space;
        cin>>xx;


        if(x == '+')
            include();
        else if(x == '-')
            exclude();
        else{
           // print();
            //cout<<" "<<endl;
            count_pat();
            cout<<ans<<endl;
            ans=0;
        }
    }
}


int main()
{
    input();
    return 0;


}
