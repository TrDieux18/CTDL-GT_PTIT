#include<iostream>
#include<string>

using namespace std;

int n,a[101];

int DX(){
	int l = 1, r = n;
	while(l < r){
		if(a[l] !=  a[r]){
			return 0;
		}
		l++;
		r--;
	}
	for(int i = 1; i <= n; i++) cout << a[i] << ' ';
	cout << endl;
}

int main(){
	cin >> n;
	for(int i = 1; i <= n; i++) a[i] = 0;
	int ok = 1;
	while(ok){
		DX();
		int i = n;
		while(a[i] == 1){
			a[i] = 1 - a[i];
			i--;
		}
		if(i > 0) a[i] = 1 -a[i];
		else break;
	}
	return 0;
}
