#include<bits/stdc++.h>
using namespace std;

int positive(int x)
{
    if(x<0) return (-1)*x;
    return x;
}


int main()
{
    int n,a;
    cin>>n>>a;

    int x[n], d[n];
    for(int i=0; i<n; i++)
        cin>>x[i];

    sort(x, x+n);
    int sum=0;

    for(int i=0; i<n; i++){
        d[i] = positive(a-x[i]);
        sum+=d[i];
    }

    if(a<=x[0]){
        cout<<d[n-2];
        return 0;
    }

    if(a>=x[n-1]){
        cout<<d[1];
        return 0;
    }

    if(n==2){
        cout<<min(d[0], d[1]);
        return 0;
    }

    int idxa=0;

    for(int i=0; i<n; i++){
        if(a>=x[i])
            idxa = i;
    }
    int l, r, sl, sr;
    l = idxa+1;
    r = n-idxa-1;

    if(l<=1)
        sr = d[n-1];
    if(r<=1)
        sl = d[0];


    int s1, s2, s3, s4;

    s1 = (2*d[n-1]) + d[1];
    s2 =  (2*d[n-2]) + d[0];
    s3 = (2*d[1]) + d[n-1];
    s4 = (2*d[0]) + d[n-2];

    cout<<min(s1, min(s2, min(s3, min(s4, min(sl, sr)))));
    return 0;
}
