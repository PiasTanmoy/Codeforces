#include<bits/stdc++.h>
using namespace std;

long long int a[100005], n, x, pias=-1, b[100005];
int counter=0;



int main()
{
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];

    sort(a, a+n );

    for(int i=0; i<n; i++){
        if(pias!=a[i]){
            pias = a[i];
            b[counter] = pias;
            //cout<<pias<<" ";
            counter++;
        }
    }


    if(counter>3)
        cout<<"NO";
    else if(counter==3){
        if( (b[2]-b[1]) == (b[1]-b[0]) )
            cout<<"YES";
        else
            cout<<"NO";
    }
    else
        cout<<"YES";


    return 0;
}
