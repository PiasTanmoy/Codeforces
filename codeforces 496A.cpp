#include<bits/stdc++.h>

using namespace std;

int maximum(int a[], int n)
{
    int max=a[1] - a[0];
    for(int i=2; i<n; i++){
        if(max<(a[i]-a[i-1]))
            max = a[i] - a[i-1];
    }
    return max;
}

int minimum(int a[], int n)
{
    int min= a[0];
    for(int i=1; i<n; i++){
        if(min>a[i])
            min = a[i];
    }
    return min;
}


int main()
{
    int n;
    cin>>n;

    int a[n];

    for(int i=0; i<n; i++)
        cin>>a[i];

    int c=1;
    int temp[n-1];
    int ans[n-2];

    for(int j=0; j<n-2; j++){
        for(int i=0; i<n-1; i++){
            if(i<c)
                temp[i] = a[i];
            else{
                temp[i] = a[i+1];
            }
        }
        ans[c-1] = maximum(temp, n-1);
        c++;
    }

    cout<<minimum(ans, n-2);
    return 0;
}


