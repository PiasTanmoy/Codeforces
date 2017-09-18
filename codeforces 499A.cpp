#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, skip;

    cin>>n>>skip;

    int moments[n][2];

    for(int i=0; i<n; i++){
        for(int j=0; j<2; j++){
            cin>>moments[i][j];
        }
    }

    int sum = 0;
    int x=1;

    for(int i=0; i<n; i++){
        sum += (moments[i][0] - x)%skip;
        sum += (moments[i][1] - moments[i][0] + 1);
        x = moments[i][1]+1;

    }

    cout<<sum;
    return 0;

}
