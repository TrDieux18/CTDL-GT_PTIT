#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n, m;cin >> n >> m;
		vector<int> v;
		for(int i = 0; i < n; i++){
			long long x; cin >> x;
			v.push_back(x);
		}
		for(int i = 0; i < m; i++){
			long long y; cin >> y;
			v.push_back(y);
		}
		sort(v.begin(),v.end());
		for(auto i : v){
			cout << i << " ";
		}
		cout << endl;
	}
	return 0;
}
