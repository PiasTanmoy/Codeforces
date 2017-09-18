#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n][n];

    int c=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            a[j][i] = c++;
        }
    }

    int temp;
    for(int j=1; j<n; j+=2){
        for(int i=0; i<n/2; i++){
            temp = a[i][j];
            a[i][j] = a[n-i-1][j];
            a[n-i-1][j] = temp;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}


