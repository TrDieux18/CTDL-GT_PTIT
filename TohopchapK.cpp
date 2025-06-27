#include<iostream>
#include<string>

using namespace std;
int n,k,a[21];
void init(){
	for(int i = 1; i <= k; i++){
		a[i] = i; 
	}
	int ok = 1;
	while(ok){
		for(int i = 1; i <= k; i++) cout << a[i]; cout  << ' ';
		int i = k;
		while(a[i] == n - k + i && i >0) i--;
		if(i == 0) break;
		else{
			a[i]++;
			for(int j = i + 1; j <= k; j++){
				a[j] = a[i] - i + j;
			}
		} 
	} 
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		init();
		cout << endl;
	}
}
