#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    long long int n;
    cin>>n;

    long long int a[n+1], b[n+1];
    a[0] = 0;

    for(long long int i=1; i<=n; i++){
        cin>>b[i];
    }

    for(long long int i=1; i<=n; i++){
        a[i] = a[i-1] + b[i];
    }
    a[0] = 1;

    long long int m;
    cin>>m;

    long long int s[m];
    for(long long int i=0; i<m; i++)
        cin>>s[i];

    long long int f, l, mid, x;

    for(long long int i=0; i<m; i++){

        f=0;
        l=n;
        mid=(f+l)/2;
        x = s[i];

        while(f<=l){

            if(a[mid] == x){
                if(mid==0)
                    cout<<mid+1<<endl;
                else
                    cout<<mid<<endl;
                break;
            }
            else if(a[mid-1]<x && x<a[mid]){
                cout<<mid<<endl;
                break;
            }
            else if(x < a[mid]){
                l = mid-1;
                mid=(f+l)/2;
            }
            else{
                f = mid+1;
                mid=(f+l)/2;
            }
        }
    }

    return 0;
}
