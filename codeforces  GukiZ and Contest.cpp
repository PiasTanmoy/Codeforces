#include<iostream>

using namespace std;

#define MAX 3000

int main()
{
    int n;
    cin>>n;

    int a[MAX], b[MAX]={0};


    for(int i=0; i<n; i++)
        cin>>a[i];

    for(int i=0; i<n; i++){
        b[a[i]]++;
    }

    for(int i=1; i<MAX; i++){
        b[i] += b[i-1];
    }

    for(int i=0; i<n; i++){
        cout<<(n-b[a[i]]+1);
        cout<<" ";
    }
    return 0;
}
