#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int n, k;
vector<pair<int, int>> a;

bool cmp(pair<int, int> a, pair<int, int> b){
	if(abs(k - a.first) ==  abs(k - b.first)){
		return a.second < b.second;
	}
	return abs(k - a.first) < abs(k - b.first);
}

int main(){
	int t; cin >>  t;
	while(t--){
		cin >> n >> k;
		a.resize(n);
		for(int i = 0; i < n; i++){
			cin >> a[i].first;
			a[i].second = i;
		}
		sort(a.begin(), a.end(), cmp);
		for(auto i : a) cout << i.first <<" ";
		cout << endl;
	}
}
