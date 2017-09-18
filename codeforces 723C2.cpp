
#include<bits/stdc++.h>

using namespace std;
long long int a[2005], b[2005], c[2005];
int n, m;
long long int sum=0;
int x=0;
int need;
int MIN=100000;

int findMin()
{
    int c=10000;
    int idx=-1;
    for(int i=1; i<=m; i++){
        if(c>=b[i]){
            c=b[i];
            idx=i;
        }
    }
    return idx;
}

void input()
{
    cin>>n>>m;
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
}



int main()
{
    input();

    for(int i=1; i<=m; i++){
        if(1<=a[i] && a[i]<=m){
            x++;
            b[a[i]]++;
            c[a[i]]++;
        }
    }

    int avg = n/m;
    int m = n%m;

    for(int i=1; i<=n; i++){
        if(1<=a[i] && a[i]<=m){
            b[i]++;
        }
    }










    return 0;

}
