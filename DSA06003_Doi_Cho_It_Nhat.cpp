#include<iostream>
#include<vector>

using namespace std;


void in(){
	int n; cin >> n;
	int a[n+1];
	for(int i = 0; i < n; i++) cin >> a[i];
	int cnt = 0;
	for(int i = 0; i < n; i++){
		int k = i;
		for(int j = i + 1; j < n; j++){
			if(a[j] < a[k]) k = j;
		}
		if(k != i){
			cnt++;
			swap(a[i],a[k]);
		}
	}
	cout << cnt;
}
int main(){
	int t; cin >> t;
	while(t--){
		in();
		cout << endl;
	}
	return 0;
}
