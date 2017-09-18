#include<bits/stdc++.h>

using namespace std;
int binary_search_pias(long long int x[], long long int n, long long int pias);

int main()
{
    long long int n;
    cin>>n;

    long long int x[n];
    for(long long int i=0; i<n; i++)
        cin>>x[i];

    long long int q;
    cin>>q;

    long long int m[q];
    for(long long int i=0; i<q; i++)
        cin>>m[i];

    sort(x, x+n);
    long long int pias;

    for(long long int i=0; i<q; i++){
        pias = m[i];
        cout<<binary_search_pias( x, n, pias )<<endl;
    }

    return 0;
}

int binary_search_pias(long long int x[], long long int n, long long int pias)
{
    long long int lb, ub, mid;
    lb = 0;
    ub = n-1;
    mid = lb/2 + ub/2;
    long long int ans=-1;
    //cout<<"Pias"<<lb<<" "<<ub<<" "<<mid<<" "<<ans<<endl;

    while(lb<=ub){
       // cout<<1<<" "<<ans<<endl;

        if(pias>=x[ub]){
            ans = ub;
           // cout<<2<<" "<<ans<<" "<<pias<<" "<<x[ub]<<endl;
            return ans+1;
        }
        if(pias<x[mid]){
            ub = mid-1;
            //cout<<3<<" "<<ans<<endl;
            if(ub<=lb)
                break;
        }

        else if(pias>x[mid]){
                //cout<<4<<" "<<ans<<endl;
            if(mid>ans)
                ans = mid;
            lb = mid+1;
            if(ub<=lb)
                break;
        }

        else if(pias == x[mid]){
                //cout<<5<<" "<<ans<<endl;
            if(mid>ans)
                ans = mid;
            lb = mid+1;
            if(ub<=lb)
                break;
        }
        if(ub<=lb)
                break;
//cout<<6<<" "<<ans<<endl;
        mid = lb/2 + ub/2;
        if(ub<=lb)
                break;
    }
//cout<<"pias"<<endl;
    return ans+1;

}
