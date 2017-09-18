#include<bits/stdc++.h>
using namespace std;

typedef pair<int, int> PS;
int n, m, k;
int mat[305][305];
int counter=0;

void input()
{
    cin>>n>>m>>k;
}

void start()
{
    int p1,p2;
    p1=1;
    p2=2;
    int x=k-1;
    int y=0;
    int flag=0;

    for(int i=1; i<=x; i++){
        cout<<2<<" ";
        for(int j=p1; j<=p2; j++){
            mat[i][j] = 1;
            cout<<i<<" "<<j<<" ";
        }
        cout<< ""<<endl;
        if(i==n){
            x=x-n;
            i=0;
            p1+=2;
            p2+=2;
        }
        if(p2>m){
            flag=1;
            break;
        }
        y=i;
    }

    if(flag){
        int lim=n;
        for(int i=x; i>0; i--){
            cout<<2<<" ";
            for(int j=lim; j>lim-2; j--)
                cout<<j<<" "<<m<<" ";
            lim-=2;
            cout<<" "<<endl;
        }

        cout<<n*m - (2*(k-1))<<" " ;
        for(int i=lim; i>0; i--)
            cout<<i<<" "<<m<<" ";

        return ;
    }


    counter = n*m - (2*(k-1));
    cout<<counter<<" ";
    int r,c;
    r=n;
    c=p1;

    if(c<=m){
        for(int i=r; i>y; i--)
            cout<<i<<" "<<c<<" ";
        c++;
    }

    if(c<=m){
        for(int i=y+1; i<=r; i++)
            cout<<i<<" "<<c<<" ";
        c++;
    }


    while(c<=m){
        for(int i=r; i>0; i--)
            cout<<i<<" "<<c<<" ";
        c++;
        if(c>m)
            break;
        for(int j=1; j<=r; j++)
            cout<<j<<" "<<c<<" ";
        c++;
    }

}



int main()
{
    //freopen("ooo.txt", "w", stdout);
    input();
    start();

    return 0;

}
