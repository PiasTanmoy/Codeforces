#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n+1];
    int sum=0;

    for(int i=1; i<n+1; i++){
        cin>>a[i];
        sum+=a[i];
    }


    int x, y;
    cin>>x>>y;

    int min = (x<y)?x:y;
    int max = (x>y)?x:y;

    int sum_1=0, sum_2=0;

    for(int i=min; i<max; i++){
        sum_1+=a[i];
    }

    sum_2 = sum - sum_1;

    if(sum_1<sum_2){
        cout<<sum_1;
        return 0;
    }
    else{
        cout<<sum_2;
        return 0;
    }
}
