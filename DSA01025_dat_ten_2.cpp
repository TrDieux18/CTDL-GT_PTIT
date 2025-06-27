#include<iostream>

using namespace std;

int a[16];
int n,k;

void in(){
	for(int i = 1; i <= k; i++){
		cout << char(a[i] + '@');
	}
	cout << endl;
}
void Try(int i){
	for(int j = a[i-1]+1; j <= n- k+i; j++ ){
		a[i] = j;
		if(i==k) in();
		else Try(i+1);
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		Try(1);
	}
	return 0;
}
