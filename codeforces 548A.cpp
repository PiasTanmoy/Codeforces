#include<bits/stdc++.h>

using namespace std;

int palindrome(char a[], int n)
{
    for(int i=0; i<n/2; i++){
        if(a[i] != a[n-i-1])
            return 0;
    }
    return 1;
}


int main()
{
    char s[1001];
    cin>>s;

    int k;
    cin>>k;

    int n = strlen(s);

    if((n%k)!=0){
        cout<<"NO";
        return 0;
    }

    char a[k][n/k];
    int c=0;

    for(int i=0; i<k; i++){
        for(int j=0; j<n/k; j++){
            a[i][j] = s[c++];
        }
    }

    for(int i=0; i<k; i++){
        if(palindrome(a[i], n/k) == 0){
            cout<<"NO";
            return 0;
        }
    }

    cout<<"YES";
    return 0;
}

