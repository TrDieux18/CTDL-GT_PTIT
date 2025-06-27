#include<bits/stdc++.h>

using namespace std;

int n,k;
string a;
vector<string> res;

void check(){
	int ok = 0;
	for(int i = 0; i < n - k + 1; i++ ){
		int cnt = 0;
		for(int j = i; j < i+ k; j++){
			if(a[j] == 'A') cnt++;
		}
		if(cnt == k) ok++;
	}
	if(ok == 1) res.push_back(a);
}
void Try(int i){
	for(char j = 'A'; j <= 'B'; j++){
		a[i] = j;
		if(i == n-1) check();
		else Try(i+1);
	}
}

