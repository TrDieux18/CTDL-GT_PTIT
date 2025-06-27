#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		sort(a,a+n,greater<int>());
		int i = 0, j = n-1;
		while(i < j ){
			cout << a[i++] <<" ";
			if( i !=j ){
				cout << a[j--]<<" ";
			}
		}
		if(i == j) cout << a[i] <<endl;
	}
	return 0;
}
