#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, m;
    cin>>m>>n;

    int r[n+1], c[n+1], isrTaken[m+1], iscTaken[m+1];
    for(int i=1; i<=n; i++){
        cin>>r[i]>>c[i];
    }

    for(int i=1; i<=m; i++){
        isrTaken[i]=0;
        iscTaken[i]=0;
    }

    long long int rcounter=0, ccounter=0, sum=0;
    sum = m*m;
    for(int i=1; i<=n; i++){
        if(isrTaken[r[i]] == 0){
            isrTaken[r[i]] = 1;
            sum-=(m-ccounter);
            rcounter++;
            //cout<<"1 "<<sum<<endl;
        }

        if(iscTaken[c[i]] == 0){
            iscTaken[c[i]] = 1;
            sum -= (m-rcounter);
            ccounter++;
            //cout<<"2 "<<sum<<endl;
        }
         cout<<sum<<" ";
    }

    return 0;
}
