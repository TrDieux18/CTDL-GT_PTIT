#include<iostream>
#include<algorithm>

using namespace std;

void in(){
	int n; cin >> n;
	int a[n];
	long long sum = 0;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	for(int i = 1; i <= n; i++) sum+=a[i];
	long long left = 0;
	bool ok = 0;
	int pos;
	for(int i = 1; i <= n; i++){
		sum -= a[i];
		if(sum  == left){
			pos = i;
			ok = 1;
			break;
		}
		left += a[i];
	}
	if(ok == 0) cout <<"-1"<<endl;
	else cout <<pos<<endl;
}

int main(){
	int t; cin >> t;
	while(t--){
		in();
	}
	return 0;
}
