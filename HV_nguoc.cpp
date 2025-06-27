#include<iostream>

using namespace std;

#define MAX 100

int nextHV(int X[],int n){
	int j = n - 1;
	while(j > 0 && X[j] > X[j + 1]){
		j--;
	}
	if(j > 0){
		int k = n;
		while(X[j] > X[k]){
			k--;
		}
		int t = X[j];
		X[j] = X[k];
		X[k] = t;
		int r = j + 1, s = n;
		while(r <= s){
		    int t = X[r];
			X[r] = X[s];
			X[s] = t;
			r++;
			s--;
		}
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int n, X[MAX];
	cin >> n;
	for(int i = 1; i <= n; i++){
		X[i] = i;
	}
	int hvi = 1;
	while(hvi == 1){
		for(int i = 1; i <= n; i++){
			cout << X[i] << ' ';
		}
		cout << endl;
		hvi = nextHV(X,n);
	}
	return 0;
}
/*1 2 3 
X[2] > X[ 3] false j =2
X[2] > X[3] false k = 3
1  3  2
3 <= 3 true
X[3] <--> X[3]
r = 4;
s = 3;
false;
 */

