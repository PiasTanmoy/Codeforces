#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    int flag=0;
    for(int k=0; k<n; k++){
        flag=0;
        for(int j=0; j<n; j++){
            if(a[j] != j){
                flag=1;
                break;
            }
        }

        if(flag == 0){
                cout<<"Yes";
                return 0;
            }
        flag=0;

        for(int i=0; i<n; i++){
            if(i%2 == 0){
                a[i] = (a[i]+1)%n;
            }
            else{
                if(a[i] == 0)
                    a[i] = n-1;
                else
                    a[i]--;
            }
        }
    }

    cout<<"No";
    return 0;
}
