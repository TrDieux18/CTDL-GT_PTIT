#include<iostream>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, x; cin >> n >> x;
		int a[n];
		int ok = 0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(x == a[i]) ok = 1;
		}
		if(ok == 1) cout <<"1"<<endl;
		else cout << "-1"<<endl;
	}
	return 0;
}
