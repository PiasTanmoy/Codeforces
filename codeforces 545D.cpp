#include<bits\stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    int cnt=0;
    int sum=a[0];

    for(int i=1; i<n; i++){
        if(sum>a[i]){
            cnt++;
        }
        sum+=a[i];
    }

    //cout<<cnt;

    sort(a, a+n);

    int cur;
    int prev;
    int c=0;

    cur = a[0];
    prev = 0;

    for(int i=1; i<n; i++){
        if(cur>a[i]){
            c++;
            cur-=a[i];
        }
        cur+=a[i];
        prev+=a[i-1];
    }

    cout<<n-c;

    return 0;

}
