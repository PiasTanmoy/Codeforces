#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string number[n];
    string sign[n];
    string store[n];


    for(int i=0; i<n; i++){
        cin>>sign[i]>>number[i];
    }

    int counter1=0;
    int counter2=0;
    int MAX=0;
    int flag=0;
    int idx=-1;


    for(int i=0; i<n; i++){
        if(sign[i] == "+"){
            counter1++;
            store[i] = number[i];
        }
        else{
            for(int j=0; j<=i; j++){
                if(number[i] == store[j]){
                    flag=1;
                }
            }
            if(flag){
                counter1--;
                store[i] = "/0";
            }
            else{
                MAX++;
            }
        }

        if(MAX<counter1)
                MAX = counter1;
        flag=0;
    }

    cout<<MAX;
    return 0;
}
