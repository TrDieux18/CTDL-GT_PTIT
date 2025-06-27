#include<iostream>
#include<string>

using namespace std;

int n;
string s;

void sinh(){
	for(int i = 1; i <= n ; i++){
		cout << s[i] <<" ";
	}
}

void Try(int i){
	for(int j = 0; j <= 1; j++){
		s[i] = j + 'A';
		if(i == n) sinh();
		else Try(i+1);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		Try(1);
		cout << endl;
	}
	return 0;
}

