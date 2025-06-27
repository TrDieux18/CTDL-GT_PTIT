#include<iostream>
#include<math.h>
using namespace std;


bool check(int n){
	if( n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++ ){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}

void in(){
	int n; cin >> n;
	for(int i = 2; i <= n/2; i++){
		if(check(i) && check(n-i)){
			cout << i <<" " << n-i;
			return;
		}
	}
	cout << "-1";
}

int main(){
	int t; cin >>t;
	while(t--){
		in();
		cout << endl;	
	}
	return  0;
}
