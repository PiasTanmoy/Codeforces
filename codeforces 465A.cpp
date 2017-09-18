#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    char a[n+1];

    for(int i=1; i<n+1; i++){
        cin>>a[i];
    }

    int x=1;
    int c=0;

    for(int i=1; i<n+1; i++){
        if(x){
            c++;
            if(a[i] == '1')
                x=1;
            else
                x=0;
        }
        else{
            cout<<c;
            return 0;
        }
    }
    cout<<c;
    return 0;
}


