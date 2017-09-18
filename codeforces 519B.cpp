#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int ans1;
    int ans2;

    int *x;
    x = new int[n+1];

    int *a;
    a = new int[1000000000+1];

    for(int i=1; i<=1000000000; i++)
        a[i] = 0;

    for(int i=1; i<=n; i++){
        cin>>x[i];
        a[x[i]]+=2;
    }

    for(int i=1; i<=n-1; i++){
        cin>>x[i];
        a[x[i]]--;
    }

    for(int i=1; i<=1000000000; i++){
        if(a[i] == 2){
            ans1 = i;
            a[i] = 0;
            break;
        }
    }

    for(int i=1; i<=n-2; i++){
        cin>>x[i];
        a[x[i]]--;
    }

    for(int i=1; i<=1000000000; i++){
        if(a[i] == 1){
            ans2 = i;
            break;
        }
    }

    cout<<ans1<<endl;
    cout<<ans2;

    return 0;

}
