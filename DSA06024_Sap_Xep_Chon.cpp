#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main(){
	int n; cin >> n;
	int a[n];
	int x = 1;
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < n -1; i++){
		int k = i;
		for(int j = i + 1; j < n; j++){
			if(a[k] > a[j]){
				k = j;
			}
		}
		swap(a[i],a[k]);
		cout <<"Buoc "<< i+1 <<": ";
		for(int i = 0; i < n; i++){
			cout << a[i]<<" ";
		}
		cout << endl;
	}
	return 0;
} 
