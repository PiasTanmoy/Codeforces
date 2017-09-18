#include<bits/stdc++.h>
using namespace std;
int nDigits(int n);

int main()
{
    int h1, m1;
    int h2, m2;

    scanf("%d:%d", &h1, &m1);
    scanf("%d:%d", &h2, &m2);

    int h3, m3;

    if(m2<=m1)
        m3 = m1 - m2;
    else{
        m3 = (m1+60) - m2;
        h1--;
    }

    if(h2<=h1)
        h3 = h1 - h2;
    else{
        h3 = 24 - (h2 - h1);
    }

    if(nDigits(h3) == 2)
        cout<<h3;
    else if(nDigits(h3) == 1)
        cout<<0<<h3;
    else
        cout<<0<<0;

    cout<<":";

    if(nDigits(m3) == 2)
        cout<<m3;
    else if(nDigits(m3) == 1)
        cout<<0<<m3;
    else
        cout<<0<<0;

    return 0;

}

int nDigits(int n)
{
    int c=0;
    while(n>0){
        n=n/10;
        c++;
    }
    return c;
}
