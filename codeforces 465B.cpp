#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    int sum=0;
    int counter=0;

    for(int i=0; i<n; i++){
        if(a[i] == 1){
            if(counter>=1 && sum!=0)
                sum++;
            sum++;
            counter=0;
        }
        else{
            counter++;
        }
    }

    cout<<sum;

    return 0;
}
