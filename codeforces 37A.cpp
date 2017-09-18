#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n], b[1001]={0};

    for(int i=0; i<n; i++)
        cin>>a[i];

    for(int i=0; i<n; i++){
        b[a[i]]++;
    }

    int max=0;
    int c =0;
    for(int i=0; i<1001; i++){
        if(b[i]!=0){
            if(max<b[i])
                max = b[i];
            c++;
        }
    }

    cout<<max<<" "<<c;

    return 0;
}
