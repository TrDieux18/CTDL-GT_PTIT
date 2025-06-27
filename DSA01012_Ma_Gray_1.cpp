#include<iostream>
#include<math.h>
using namespace std;

int n,a[11];
void in(){
	cout << a[1];
	for(int i = 2; i <= n; i++){
		int ans = a[i] ^ a[i-1];
		cout << ans;
	}
	cout << ' ';
}
void Try(int i){
	for(int j = 0; j <=1; j++){
		a[i] = j;
		if(i == n) in();
		else Try(i+1);
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		Try(1);
		cout << endl; 
	}
	return 0;
}
