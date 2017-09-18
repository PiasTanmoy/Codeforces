#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, d;
    cin>>n>>d;

    string s[d];
    for(int i=0; i<d; i++)
        cin>>s[i];

    int MAX=0;
    int counter=0;
    int flag=0;

    for(int i=0; i<d; i++){
        flag=0;
        for(int j=0; j<n; j++){
            if(s[i][j] == '0'){
                flag=1;
                break;
            }
        }

        if(flag){
            counter++;
            if(MAX<counter)
                MAX = counter;
        }
        else
            counter=0;
    }

    cout<<MAX;
    return 0;
}
