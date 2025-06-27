#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int main(){
	int t; cin >>  t;
	while(t--){
		int n; cin >> n;
		pair<int, int> a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i].first;
			a[i].second = i;
		}
		sort(a, a+n);
		int ans = -1, min1 = a[0].second, k = a[0].first;
		for(int  i = 1; i < n; i++){
			if(a[i].first > k){
				ans = max(ans, a[i].second - min1);
			}
			if(min1 > a[i].second){
				min1 = a[i].second;
				k = a[i].first;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
