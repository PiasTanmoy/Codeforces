#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];
    int t25=0, t50=0, t100=0;

    for(int i=0; i<n; i++)
        cin>>a[i];

    int i=0;
    while(t25>=0 && i<n){
        switch(a[i++])
        {
        case 25:
            t25++;
            break;
        case 50:
            t50++;
            t25--;
            break;
        case 100:
            if(t50>0){
                t50--;
                t25--;
            }
            else
                t25-=3;
            break;
        }
    }

    if((i==n) && t25>=0)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
