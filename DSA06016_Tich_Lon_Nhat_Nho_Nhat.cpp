#include<iostream>
#include<algorithm>

using namespace std;

void in(){
	long long n,m; cin >> n >> m;
	long long a[n],b[m];
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < m; i++) cin >> b[i];
	sort(a,a+n);
	sort(b,b+m);
	long long tich = 0;
	tich = a[n-1]*b[0]; 
	cout << tich<<endl; 
}
int main(){
	int t; cin >> t;
	while(t--){
		in();
		cout << endl;
	}
	return 0;
} 
