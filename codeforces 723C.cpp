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



int main()
{
    cin>>n>>m;
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }

    for(int i=1; i<=m; i++){
        if(1<=a[i] && a[i]<=m){
            x++;
            b[a[i]]++;
            c[a[i]]++;
        }
    }

    need = n - x;
    int idx;

    for(int i=1; i<=m; i++){
        if(need <= 0)
            break;
        idx = findMin();
        b[idx]++;
        need--;
    }

    int pias=0;
    int ans1 = b[findMin()];

    for(int i=1; i<=n; i++){
        if(!(1<=a[i] && a[i]<=m)){
            for(int j=1; j<=m; j++){
                if(b[j] > c[j]){
                    a[i] = j;
                    b[j]--;
                    pias++;
                }
            }
        }
    }



    cout<<ans1<<" "<<pias<<endl;

    for(int i=1; i<=n; i++)
        cout<<a[i]<<" ";
    return 0;

}
