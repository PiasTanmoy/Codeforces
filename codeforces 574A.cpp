#include<bits/stdc++.h>

using namespace std;
int a[1005];
int n;
int findMax();
int main()
{
    cin>>n;

    for(int i=1; i<=n; i++)
        cin>>a[i];

    int x;
    int y;
    int mid;

    x=a[1];
    int i=2;
    int vote=0;

    while(1){
        int i = findMax();

        if(a[1]>a[i]){
            cout<<vote;
            return 0;
        }

        a[1]++;
        a[i]--;
        vote++;
    }
    return 0;
}


int findMax()
{
    int m=-1;
    int idx;

    for(int i=2; i<=n; i++){
        if(m<a[i]){
            m=a[i];
            idx=i;
        }
    }

    return idx;
}
