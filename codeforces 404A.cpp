#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    char a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }

    char x1, x2;
    x1 = a[0][0];
    x2 = a[0][1];

    int j=0;

    for(int i=0; i<n; i++){
        if(a[j][i] != x1 || a[j][n-i-1] != x1){
            cout<<"NO";
            return 0;
        }
        j++;
    }


    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
           if(i!=j && i!=(n-j-1)){
                if(a[i][j] != x2){
                    cout<<"NO";
                    return 0;
                }
            }
        }
    }
/*
    int row = 0;

    for(int i=0, j=n-1; row<n; i++, j--){
         if(a[row][i] != a[row][j]){
            cout<<"NO";
            return 0;
         }
         row++;
    }
*/
    cout<<"YES";
    return 0;
}
