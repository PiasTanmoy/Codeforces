#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int k;
    int n4=0;
    int n7=0;
    int counter=0;
    int numbers[105];
    int temp;
    int x;
    int revans=0;

    cin>>n>>k;

    for(int i=0; i<n; i++)
        cin>>numbers[i];

    for(int i=0; i<n; i++){

        temp = numbers[i];

        while(temp!=0){
            x = temp%10;
            temp/=10;
            if(x == 4 || x == 7)
                counter++;
            if(counter>k){
                revans++;
                break;
            }
        }
        counter=0;
        x=0;

    }

    cout<<n-revans;

    return 0;

}
