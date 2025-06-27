#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


void in(){
	int n;
    vector<int> v;
	cin >> n;
	for(int i = 0; i<n; i++){
		int x; cin >> x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	for(auto i : v){
		cout <<i<<" ";
	} 
}
int main(){
	int t; cin >> t;
	while(t--){
		in();
		cout << endl;
	}
	return 0;
}
