#include<bits/stdc++.h>
using namespace std;

int x[1005];
int y[1005];
int u[1005] ={0};
int d[1005] ={0};
int l[1005] ={0};
int r[1005] ={0};

int main()
{
    int n;
    cin>>n;



    for(int i=0; i<n; i++){
        cin>>x[i]>>y[i];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(x[i] == x[j] && i!=j){
                if(y[i]>y[j])
                    d[i]++;
                else if(y[i]<y[j])
                    u[i]++;
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(y[i] == y[j] && i!=j){
                if(x[i]>x[j])
                    l[i]++;
                else if(x[i]<x[j])
                    r[i]++;
            }
        }
    }

    int counter=0;

    for(int i=0; i<n; i++){
        if(u[i]>0 && d[i]>0 && l[i]>0 && r[i]>0)
            counter++;
    }

    cout<<counter;
    return 0;
}
