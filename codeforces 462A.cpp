#include<iostream>
#include<stdio.h>

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

    int c=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            c=0;
            if(a[i][j] == 'o'){
                if(i>0 && a[i-1][j] == 'o')
                    c++;
                if(j>0 && a[i][j-1] == 'o')
                    c++;
                if(i<n-1 && a[i+1][j] == 'o')
                    c++;
                if(j<n-1 && a[i][j+1] == 'o')
                    c++;

                if(c%2 == 1){
                    cout<<"NO";
                    return 0;
                }
            }
        }
    }

    cout<<"YES";
    return 0;

}


