#include<iostream>
#include<string>

using namespace std;

void init(){
	string s;
	cin >> s;
	int len = s.length();
	while(len--){
		if(s[len] == '1'){
			s[len] = '0';
			break;
		}
		else s[len] = '1';
	}
	cout << s << endl;
}

int main(){
	int t; 
	cin >> t;
	while(t--){
		init();
	}
	return 0;
}
