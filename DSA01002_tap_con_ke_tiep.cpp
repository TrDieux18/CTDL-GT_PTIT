#include<iostream>

using namespace std;

void init(){
	int n,k;
	cin >> n >> k;
	int i = k,a[k+1];
	for(int i = 1; i <= k; i++) cin >> a[i];
	while(a[i] == n - k+ i && i > 0) i--;
	if(i == 0) for(int i = 1; i <= k; i++) a[i] = i;
	else{
		a[i]++;
		for(int j = i+1; j <= k; j++) a[j] = a[j-1]+1;	 
	} 
	for(int i = 1; i <= k; i++) cout << a[i]<<" "; 
}

int main(){
	int t; cin >> t;
	while(t--){
		init();
		cout << endl; 
	} 
	return 0; 
} 
