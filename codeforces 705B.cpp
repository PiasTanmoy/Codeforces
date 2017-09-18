#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    long long int a[100000];
    cin>>n;

    for(int i=0; i<n; i++)
        cin>>a[i];

    int p1=0;
    int p2=0;

    for(int j=0; j<n; j++){

        if(a[j]%2 == 0){
            if(p1 == 1){
                p1 = 0;
                p2 = 1;
            }
            else{
                p1 = 1;
                p2 = 0;
            }

        }
        else if(a[j]%2 == 1){
            if(p1 == 1){
                p1 = 1;
                p2 = 0;
            }
            else{
                p1 = 0;
                p2 = 1;
            }
        }

        if(p1 == 1)
            cout<<1<<endl;
        else
            cout<<2<<endl;
    }



    return 0;
}
