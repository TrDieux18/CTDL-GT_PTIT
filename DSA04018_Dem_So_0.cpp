#include<iostream>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n+1];
		int cnt = 0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(a[i] == 0) ++cnt;
		}
		cout << cnt<< endl;
	}
}
