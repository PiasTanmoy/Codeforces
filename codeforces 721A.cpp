#include<bits/stdc++.h>
using namespace std;

 int n;
string s;
int counter=0;
int a[105];
int c=0;


int main()
{
    cin>>n>>s;

    for(int i=0; i<n; i++){
        if(s[i] == 'B'){
            a[counter]++;
        }
        else{
            counter++;
        }
    }

    for(int i=0; i<105; i++){
        if(a[i]!=0){
            c++;
        }
    }

    cout<<c<<endl;
    for(int i=0; i<105; i++){
        if(a[i]!=0){
            cout<<a[i]<<" ";
        }
    }
    return 0;
}
