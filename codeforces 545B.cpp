#include<bits/stdc++.h>

using namespace std;

int main()
{
    string a, b;
    cin>>a>>b;


    int n = a.length();
    int counter=0;
    char ans[n];

    for(int i=0; i<n; i++){
        if(a[i] != b[i]){
            counter++;
        }
    }

    if(counter %2 == 1){
        cout<<"impossible";
        return 0;
    }

    counter=0;

    for(int i=0; i<n; i++){

        if(a[i] != b[i]){
                counter++;
            if(counter%2 == 1){
                if(a[i] == '0')
                    cout<<1;
                else
                    cout<<0;
            }
            else
                cout<<a[i];

        }
        else
            cout<<a[i];
    }

    return 0;
}
