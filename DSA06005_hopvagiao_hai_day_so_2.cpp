#include<iostream>
#include<set>
#include<algorithm>

using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n, m;cin >> n >> m;
		int a[n+1],b[m+1];
		set<int> se;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			se.insert(a[i]);
		}
		for(int i = 0; i < m; i++){
		    cin >> b[i];
			se.insert(b[i]);
		}
		for(auto i : se){
			cout << i << " ";
		}
		cout << endl;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(b[j] == a[i]){
					cout << b[j]<< " ";
				}
			}
		}
		cout << endl;
	}
	return 0;
}
