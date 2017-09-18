#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    cout<<ceil((n*n)/2.0)<<endl;;

    int c=1;
    int r=2;
    for(int i=0; i<n; i++){
        for(int j=0; j<n;j++){
            if(c%2 == 1)
                cout<<"C";
            else
                cout<<".";
            c++;
        }
        if(r%2==0)
            c=0;
        else
            c=1;
        r++;
        cout<<"\n";
    }

    return 0;
}


