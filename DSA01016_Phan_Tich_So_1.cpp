#include<iostream>

using namespace std;
int n,a[11];
void in(int n){
	cout <<"(";
	for(int i = 1; i < n; i++) cout << a[i] <<' ';
	cout << a[n] <<") ";
}

void Try(int i, int sum, int k){
	for(int j = k; j >= 1; j--){
		if(sum + j <= n){
			a[i] = j;
			sum += j;
			if(sum == n) in(i);
			else Try(i+1,sum,j);
			sum -= j;
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		Try(1,0,n);
		cout << endl;
	}
	return 0;
}
