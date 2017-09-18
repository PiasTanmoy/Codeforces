#include<bits/stdc++.h>

using namespace std;

int main()
{
    int r, c;
    cin>>r>>c;

    char s[10][10];

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>s[i][j];
        }
    }

    int sum=0;
    int cnt=0;

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(s[i][j] == '.'){
                cnt++;
                s[i][j] = 'C';
            }
            if(s[i][j] == 'S'){
                cnt=0;
                for(int x=0; x<j; x++){
                    s[i][x]='.';
                }
                break;
            }
            if(j==(c-1)){
                sum+=cnt;
                cnt=0;
            }
        }
    }

    cnt=0;

    for(int j=0; j<c; j++){
        for(int i=0; i<r; i++){
            if(s[i][j] == '.'){
                cnt++;
                s[i][j] = 'C';
            }
            if(s[i][j] == 'S'){
                cnt=0;
                for(int x=0; x<i; x++){
                    s[x][j]='.';
                }
                break;
            }
            if(i==(r-1)){
                sum+=cnt;
                cnt=0;
            }
        }
    }

    cout<<sum;

    return 0;

}
