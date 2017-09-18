#include<bits/stdc++.h>

using namespace std;
int cal_Min(int a[], int n);


int main()
{
    int n;
    cin>>n;

    int x[105];
    for(int i=0; i<n; i++)
        cin>>x[i];

    int MIN;

    while(1){

        MIN = cal_Min(x, n);

        if(MIN == 0)
            break;

        for(int i=0; i<n; i++)
            if(x[i] != MIN)
                x[i] = x[i] - MIN;

    }

    int sum=0;
    for(int i=0; i<n; i++)
        sum+=x[i];

    cout<<sum;
    return 0;
}

int cal_Min(int a[], int n)
{
    int MIN = 10000;
    int counter=0;

    for(int i=0; i<n; i++){
        if(MIN>a[i])
            MIN = a[i];
    }

    for(int i=0; i<n; i++)
        if(MIN == a[i])
            counter++;

    if(counter == n)
        return 0;
    else
        return MIN;
}
