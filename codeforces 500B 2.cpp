#include<bits/stdc++.h>
using namespace std;

int a[305];
int n;
string mat[305];

void input()
{
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];

    for(int i=0; i<n; i++){
        cin>>mat[i];
    }
}

void print()
{
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
}


int minimum(int first, int finish)
{
    int MIN=a[first];
    int idx=-1;
    for(int i=first+1; i<finish; i++){
        if(MIN>a[i] && mat[first][i]=='1'){
            MIN = a[i];
            idx=i;
        }
    }
    return idx;

}



void solve500B()
{
    int last=0;
    int k=-1;

    for(int i=0; i<n; i++){
        if(last < a[i]){
            k = minimum(i, n);
            if(k!=-1 && a[i] > a[k]){
                swap(a[i], a[k]);
                last = a[i];
            }
        }
    }
}



int main()
{
    input();

    print();

    return 0;
}

