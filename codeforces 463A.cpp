#include<iostream>

using namespace std;

int main()
{
    int n, s;
    cin>>n>>s;

    int x[n], y[n];

    for(int i=0; i<n; i++){
        cin>>x[i];
        cin>>y[i];
    }

    int candy = -1;

    for(int i=0; i<n; i++){
        if(y[i] == 0 && (s>=x[i]) && candy<y[i])
            candy = 0;
        else if((s>x[i]) && y[i]!=0 && (candy<(100 - y[i])))
            candy = 100 - y[i];
    }

    cout<<candy;
    return 0;
}
