#include<iostream>
#include<math.h>

using namespace std;

void in(){
	long long n,k; cin >> n >> k;
	long long a[n];
	for(int i = 0; i < n; i++ ) cin >> a[i];
	long long cnt = 0;
	for(int i = 0; i < n - 2; i++){
		for(int j = 1; j < n-1; j++){
			for(int z = 2; z < n; z++){
				if(a[i] + a[j] + a[z] < k){
					cnt++;
				}
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
