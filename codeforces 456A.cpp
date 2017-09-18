#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n], b[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
        cin>>b[i];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)

            if(a[i]<a[j]){
                if(b[i]>b[j]){
                    cout<<"Happy Alex";
                    return 0;
                }
            }

            else{
                if(b[i]<b[j]){
                    cout<<"Happy Alex";
                    return 0;
                }
            }

    }

    cout<<"Poor Alex";
    return 0;

}

