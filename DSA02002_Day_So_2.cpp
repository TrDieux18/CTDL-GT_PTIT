#include<iostream>
#include<vector>

using namespace std;

int n;

void in(){
	cin >> n;
	vector<int> a(11);
	a.resize(n); 
	vector<vector<int>> ans;
	for(int i = 0; i < a.size(); i++) cin >> a[i]; ans.push_back(a);
	while(a.size() > 1){
		for(int i = 0; i < a.size()-1; i++) a[i] = a[i] + a[i+1];
		a.pop_back();
		ans.push_back(a);
	}
	for(int i = ans.size() - 1; i >= 0; i--){
		cout <<'[';
		for(int j = 0; j < ans[i].size() - 1; j++) cout << ans[i][j] <<" ";
		cout << ans[i].back() <<']'<<' ';
	}
	cout << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		in();
	}
	return 0;
}
 
