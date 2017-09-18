/*
#include<bits/stdc++.h>

using namespace std;

int pow2(long long int x);
int main()
{
    long long int n, m;
    cin>>n>>m;

    long long int x, sub, temp1, temp2, counter=0, div, MIN=100000;

    if(n>m){
        cout<<(n-m);
        return 0;
    }

    x=n;

    for(int i=0; x-i>0; i++){
        div = ceil( (m*1.0)/(x-i) );
        div = pow2(div);
        sub = (x-i)*pow(2, div) - m;
        cout<<i<<" "<<div<<" "<<sub<<" "<<(sub+div+i)<<endl;
        if(MIN>(div+sub+i))
            MIN = i+div+sub;
    }
    cout<<MIN;
    return 0;
}

int pow2(long long int x)
{
    if(x == 2)
        return 1;

    int counter=1;
    int res=2;
    while(x>res){
        res*=2;
        counter++;
    }
    return counter;
}
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int clicks = 0;
	if(m < n)
	{
		cout << n - m;
		return 0;
	}
	while(n<m)
	{
		if(m %2 == 0)
		{
			m/=2;
		}
		else
		{
			m++;
		}
		clicks++ ;
	}
	cout << abs(clicks + n - m);

	return 0;
}
