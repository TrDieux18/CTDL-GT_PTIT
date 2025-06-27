#include<iostream>
#include<algorithm>

using namespace std;

void in(){
	int n,k; cin >> n >>k;
	int a[n+1];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a,a+n);
	for(int i = n-1; i >= n-k; i--){
		cout << a[i] <<' ';
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		in();
		cout << endl;
	}
	return 0;
} 
