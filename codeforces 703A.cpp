#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int m[n], c[n];
    for(int i=0; i<n; i++)
        cin>>m[i]>>c[i];

    int mcounter=0;
    int ccounter=0;

    for(int i=0; i<n; i++){
        if(m[i]>c[i])
            mcounter++;
        else if(m[i]<c[i])
            ccounter++;
    }

    if(mcounter == ccounter)
        cout<< "Friendship is magic!^^" ;
    else if(mcounter > ccounter)
        cout<<"Mishka";
    else
        cout<<"Chris";

    return 0;
}
