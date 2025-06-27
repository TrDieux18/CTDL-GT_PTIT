#include<bits/stdc++.h>

using namespace std;
int n,k,cnt;
int a[15],b[15];
bool stop;

void solve(){
	cnt++;
	for(int i = 1; i <=k; i++){
		if(a[i] != b[i])
		 return;
	}
	stop = true;
}

void Try(int i){
	if(stop) return;
	for(int j = a[i-1]+1; j <= n -k + i; j++){
		a[i] = j;
		if(i == k) solve();
		else Try(i+1);
	}
}


void in(){
	cnt = 0;
	stop = false;
	cin >> n >> k;
	for(int i = 1; i <= k; i++){
		cin >> b[i];
	}
	Try(1);
	cout << cnt;
}

int main(){
	int t; cin >> t;
	while(t--){
		in();
		cout << endl;
	}
}
