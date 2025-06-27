#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n, k, cnt = 0;
vector<int> a, b, c;

void check(){
	vector<int> dem = c;
	sort(dem.begin(),dem.end());
	if(dem == c) cnt++;
}

void Try(int i){
	for(int j = b[i-1]+1; j <= n - k + i; j++){
		b[i] = j;
		c[i] = a[b[i]];
		if(i == k) check();
		else Try(i+1);
	}
}

int main(){
	cin >> n >> k;
	a.resize(n+1);
	b.resize(k+1,0);
	c.resize(k+1,0);
	for(int i = 1; i <= n; i++) cin >> a[i];
	Try(1);
	cout << cnt;
	return 0;
}
