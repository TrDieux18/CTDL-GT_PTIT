#include<iostream>
#include<algorithm>

using namespace std;

void in(){
	int n; cin >> n;
	int a[n+1];
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(a,a+n);
	if(a[0] != a[1]){
		cout << a[0] <<" "<<a[1]; 
	} 
	else cout <<"-1";
}
int main(){
	int t; cin >> t;
	while(t--){
		in();
		cout << endl;
	}
	return 0;
}
