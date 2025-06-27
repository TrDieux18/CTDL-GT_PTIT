#include<iostream>
#include<algorithm>

using namespace std;

void in(){
	int n; cin >> n;
	int a[n+1],b[n+1];
	for(int i = 0; i < n; i++){
		cin >> a[i];
		b[i] = a[i];
	}
	sort(a, a+n);
	int i = 0, j = n-1;
	while(a[i] == b[i]) i++;
	while(a[j] == b[j] && j > i) j--;
	cout << i+1 <<" " << j+1 <<endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		in();
	}
	return 0;
}
