#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main(){
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < n; i++){
		int k = a[i];
		int j = i-1;
		while( j >= 0 && a[j] > k){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = k;
		cout <<"Buoc "<< i <<": ";
		for(int k = 0; k <= i; k++){
			cout << a[k]<<" ";
		}
		cout << endl;
	}
	return 0;
} 
