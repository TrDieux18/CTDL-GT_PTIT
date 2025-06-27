#include<iostream>
#include<algorithm>

using namespace std;

void in(){
	int n, k ; cin >> n >> k;
	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(a,a+n);
	int cnt = 0;
	for(int i = 0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			if(a[i]+a[j] == k){
				cnt++;
			}
		}
	}
	cout << cnt << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		in();
	}
	return 0;
}
