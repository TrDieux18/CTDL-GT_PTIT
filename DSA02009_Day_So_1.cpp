#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int n;
vector<int> a(11);

void in(){
	cout <<'[';
	for(int i = 0; i < a.size()-1; i++) cout << a[i]<<' ';
	cout << a[a.size()-1] <<']' << endl;
}

void init(){
	cin >> n;
	a.resize(n);
	for(int i = 0; i < a.size(); i++){
		cin >> a[i];
	}
	in();
	while(a.size() > 1){
		for(int i = 0; i < a.size() - 1; i++){
			a[i] = a[i] + a[i+1];
		}
		a.pop_back();
		in();
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		init();
	}
	return 0;
}
