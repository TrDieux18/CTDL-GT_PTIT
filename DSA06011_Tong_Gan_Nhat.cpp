#include<iostream>
#include<algorithm>

using namespace std;

void in(){
	int n; cin >> n;
	int a[n+1];
	for(int i = 0; i < n; i++) cin >> a[i];
	int ans = 2e6;
	for(int i =0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			int sum = a[i] + a[j];
			if(abs(sum) < abs(ans)) ans = sum;
		}
	}
	cout << ans << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		in();
	}
	return 0;
}
