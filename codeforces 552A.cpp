#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int x1[n];
    int y1[n];
    int x2[n];
    int y2[n];


    for(int i=0; i<n; i++){
        cin>>x1[i];
        cin>>y1[i];
        cin>>x2[i];
        cin>>y2[i];
    }

    int sum=0;
    for(int i=0; i<n; i++){
        sum+= ((x2[i] - x1[i] + 1)*(y2[i] - y1[i] + 1));
    }

    cout<<sum;

    return 0;
}


