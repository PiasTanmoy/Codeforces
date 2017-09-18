#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n ,m , k;
    cin>>n>>m>>k;

    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    int c=0;
    for(int i=0; i<n; i++){
        if(a[i] == 1){
            m--;
            if(m<0)
                c++;
        }

        else if(a[i] == 2){
            if(k>0)
                k--;
            else if(m>0)
                m--;

            else if(k<=0 && m<=0)
                c++;
        }
    }

    cout<<c;
    return 0;
}


