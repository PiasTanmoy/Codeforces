#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    string s1 = "I hate ";
    string s2 = "I love ";
    string s3 = "that ";
    string s4 = " it ";

    int i;

    for(i=0; i<n-1; i++){
        if(i%2 == 0)
            cout<<s1<<s3;
        else
            cout<<s2<<s3;
    }

   if(i%2 == 0)
        cout<<s1<<s4;
    else
        cout<<s2<<s4;

    return 0;

}
