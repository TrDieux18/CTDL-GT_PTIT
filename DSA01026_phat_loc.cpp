#include<bits/stdc++.h>

using namespace std;
int n;
string s;
vector<string> res;

void solve(){
	if(s.front() == '8' && s.back() == '6' && s.find("88") == -1 && s.find("6666") == -1){
		res.push_back(s);
	}
}

void Try(int i){
	for(int j = 0; j <= 1; j++){
		if(j== 0) s[i] = '6';
		else s[i] = '8';
		if(i == n-1) solve();
		else Try(i+1);
	}
}
void in(){
	cin >> n;
	s.resize(n);
	Try(0);
	sort(res.begin(),res.end());
	for(string i : res){
		cout << i << endl;
	}
}
int main(){
	in();
	return 0;
}

