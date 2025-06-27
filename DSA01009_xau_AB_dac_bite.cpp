#include<iostream>
#include<vector>
#include<string.h>

using namespace std;

int n,k;
string a;
vector<string> v;
void check(){
	int ok = 0;
	for(int i = 0; i <n- k+1; i++){
		int cnt = 0;
		for(int j = i; j <i+ k; j++){
			if(a[j] == 'A') cnt++;
		}
		if(cnt==k) ok++;
	}
	if(ok == 1) v.push_back(a);
} 

void Try(int i){
	for(char j = 'A'; j <= 'B'; j++){
		a[i] = j; 
		if(i == n-1) check();
		else Try(i+1);
	}
}

int main(){
	cin >> n >> k;
	a.resize(n);
	Try(0); 
	cout << v.size() << endl;
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << endl;
	}
	return 0;
}
