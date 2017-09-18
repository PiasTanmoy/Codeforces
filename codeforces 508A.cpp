#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k;
    cin>>n>>m>>k;
    int flag=0;
    int counter=0;
    int x, y;

    bool mat[1005][1005] = {false};

    for(int i=0; i<k; i++){
        cin>>x>>y;

        mat[x][y] = true;

        if(flag == 0){
            counter++;
            if(mat[x-1][y-1] && mat[x-1][y] && mat[x][y-1] && mat[x][y])
                flag = 1;
            if(mat[x-1][y] && mat[x-1][y+1] && mat[x][y] && mat[x][y+1])
                flag = 1;
            if(mat[x][y-1] && mat[x][y] && mat[x+1][y-1] && mat[x+1][y])
                flag = 1;
            if(mat[x][y] && mat[x][y+1] && mat[x+1][y] && mat[x+1][y+1])
                flag = 1;
        }
    }

    if(flag == 1)
        cout<<counter;
    else
        cout<<0;
    return 0;
}
