#include<bits/stdc++.h>
using namespace std;
int n;
string low(string s){
	for(int i = 0; i < s.length(); i++)
		s[i] = tolower(s[i]);
	return s;
}

map<string, vector<string> > a;
int mx = 0;

void f(string s, int k){
	k++;
	mx = max(mx, k);
	for(int i = 0; i < a[s].size(); i++)
		f(a[s][i], k);
}

int main(){
	//freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
	string n1, s, n2;

	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> n1 >> s >> n2;
		a[low(n2)].push_back(low(n1));
	}
	f(low("Polycarp"), 0);
	cout << mx;
	return 0;
}
