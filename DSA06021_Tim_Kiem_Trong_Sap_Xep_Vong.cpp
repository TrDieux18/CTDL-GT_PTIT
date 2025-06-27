#include<iostream>
#include<algorithm>

using namespace std;


int main(){
	int t; cin >> t;
	while(t--){
		int n , k ; cin >> n >> k;
		int a[n+1]; 
		int pos; 
		for(int i = 1; i <= n; i++){
			cin >> a[i];
			if(k == a[i])  pos  = i; 
		} 
		cout <<pos << endl;
	}
	return 0;
} 
