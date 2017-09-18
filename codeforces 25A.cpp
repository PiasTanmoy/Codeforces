#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int counte=0;
    int idxe;
    int idxo;
    scanf("%d", &n);

    int a[n];
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);

    for(int i=0; i<n; i++){
        if((a[i])%2 == 0){
            counte++;
            idxe=i+1;
        }
        else{
            idxo=i+1;
        }
    }

    if(counte>1){
        cout<<idxo;
    }
    else{
        cout<<idxe;
    }
    return 0;
}
