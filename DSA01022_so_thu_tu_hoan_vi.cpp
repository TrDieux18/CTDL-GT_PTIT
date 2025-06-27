#include<bits/stdc++.h>

using namespace std;

int n, cnt;
int a[10],check[10],b[10];
bool stop;

void solve(){
	cnt++;
	for(int i = 1; i <= n; i++){
		if(a[i] != b[i])
		  return;
	}
	stop = true;  
} 

void Try(int i){
	if(stop) return;
	for(int j = 1; j <= n; j++){
		if(check[j] == 0){
			a[i] = j;
			check[j] = 1;
			if(i == n) solve();
			else Try(i+1);
			check[j] = 0;
		} 
	}
}

void in(){
	cnt = 0;
	stop = false;
	memset(check,0,sizeof(check));
	cin >> n;
	for(int i = 1; i <= n; i++){
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
	return 0; 
} 

