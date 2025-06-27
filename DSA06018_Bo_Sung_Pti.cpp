#include<iostream>
#include<algorithm>
using namespace std;

void in(){
	int n; cin >> n;
	int a[n+1];
//	int cnt[1001] = {0};	
	for(int i = 0; i < n;i++){
		cin >> a[i];
	}
	int cnt = 0;
	sort(a, a+n);
	for(int i = 1; i < n; i++){
		if(a[i] != a[i-1]){
			cnt++;
		}
	}
	cout << a[n-1] - cnt - a[0]<< endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		in();
	}
	return 0;
}
