#include<iostream>
#include<string>

using namespace std;

void init(){
	string s; cin >> s;
	int i = s.length();
	while(i--){
		if(s[i] == '1'){
			s[i] = ' 0';
			break;
		}
		else s[i] = '1';
	}
	cout << s << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		init();
	}
	return 0;
}
